// 020_ClassPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 클래스가 못하는건 내가 안만들어서 입니다.
class Player 
{
public:
    int Hp;

    void Damage() 
    {

    }
};

class TestClass
{
};

void DamageToInt(int* _PlayerHp, int Att) 
{
    *_PlayerHp -= Att;
}

void DamageToClass(Player* _Player, int Att)
{
    // 포인터 형으로 맴버를 끄집어 낼때는 -> 끄집어 내면 됩니다.
    _Player->Hp -= Att;
    // _Player->Damage();
}

int PlayerHp = 100;

int main()
{
    Player NewPlayer;
    NewPlayer.Hp = 100;


    DamageToInt(&PlayerHp, 10);

    DamageToClass(&NewPlayer, 10);


    std::cout << "Hello World!\n";
}
