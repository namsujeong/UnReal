// 048_ClassName.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// class 전역 {

// :: => 안에

class Player 
{
public:
    //   플레이어 안의 hp
    // 맴버변수는 구현을 분리할 필요가 없고
    int /*Player::*/Hp;

public:
    // 맴버 함수는 구현을 분리할수가 있고
    // 분리하는게 권장됩니다.
    // 이 내부에서는 가만히 있어도
    // 플레이에 속해있는게 인식이 되지만

    void Damage();
};

// 전역안에 있는 damage
// 바깥에서는 내가 어떤 클래스에 존재하는 
void ::Player::Damage()
{

}

void Damage() 
{

}

class Monster
{
public:
    //   몬스터 안의 hp
    int /*Monster::*/Hp;
};

int main()
{
    // ::main()

    // 풀네임은 다음과 같습니다.
    // 전역::Monster::Hp
    // ::Monster::Hp

    Player NewPlayer;

    // 진짜 풀네임은 이거고
    // NewPlayer.::Player::Damage();

    // 진짜 풀네임이 아닌. 약식으로 이렇게 호출할수 있습니다.
    NewPlayer.Damage();


    // 당연히 이렇게 쓰는건 안됩니다.
    std::cout << "Hello World!\n";
}

//};