// 036_Inheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

// 상속이라는 문법은
// 부모 클래스라는것을 만들어서
// 부모 클래스가 자신의 자식들에게 같은 문법을 사용하게 하는 겁니다.
// 상속은 쉽게하는 법은 2개의 겹치는 부분이 많은 클래스들을 
// 다음과 같이 묶어 놓는 겁니다.
   // 1. 새로운 클래스를 하나 만든다.
   // 2. 완전히 공통된 부분들을 그 클래스에 구현한다.

// 상속문법을 위한 접근제한 지정자가 있는데.
// 접근제한 지정자의 범위는 다음과 같았다.

// class myclass { 내부 }; 외부, 자식 내부

//            내부       자식내부     외부    
// public:    접근가능   접근가능     접근가능
// protected: 접근가능   접근가능     접근불가
// private:   접근가능   접근불가     접근불가

class FightUnit // 부모
{
protected:
    int Hp;
    int Att;

public:
    int GetAtt()
    {
        return this->Att;
    }

    int IsDeath()
    {
        return this->Hp <= 0;
    }

    // 만약에 자식이 이 함수를 완전히 동일한 스펙으로 구현했다면
    // 자식의 함수가 실행되게 하는 키워드 입니다.
    // 이러한 현상을 오버라이딩이라고 합니다.
    // 오버로딩과 관련성 제로
    virtual void StatusRender()
    {
    }

    // 우리가 실행되기를 원하는게 이 함수인가요?
    virtual void Damage(int _Att)
    {
    }


public:
    FightUnit(int _Hp, int _Att) : Hp(_Hp), Att(_Att)
    {

    }

};

// 이걸 상속문법이라고 합니다.

// 이걸 상속이라고 합니다.
class Player : public FightUnit // 자식
{
public:
    void StatusRender()
    {
        printf_s("플레이어의 능력치 ------------------------------------\n");
        printf_s("Hp %d\n", Hp);
        printf_s("Att %d\n", Att);
        printf_s("----------------------------------------------------\n");
    }

    void Damage(int _Att)
    {
        printf_s("플레이어가 %d의 데미지를 입었습니다.\n", _Att);
        Hp -= _Att;
    }

public:
    // 맴버이니셜라이저는 다음과 같이 대체할수 있습니다.
    Player(int _Hp, int _Att) : FightUnit(_Hp, _Att)
    {

    }
};

class Monster : public FightUnit
{
public:
    void StatusRender()
    {
        printf_s("몬스터의 능력치 -------------------------------------\n");
        printf_s("Hp %d\n", Hp);
        printf_s("Att %d\n", Att);
        printf_s("----------------------------------------------------\n");
    }

    void Damage(int _Att)
    {
        printf_s("몬스터가 %d의 데미지를 입었습니다.\n", _Att);
        Hp -= _Att;
    }

public:
    Monster(int _Hp, int _Att) : FightUnit(_Hp, _Att)
    {

    }
};



class NPC : public FightUnit
{
public:
    void StatusRender()
    {
        printf_s("NPC의 능력치 -------------------------------------\n");
        printf_s("Hp %d\n", Hp);
        printf_s("Att %d\n", Att);
        printf_s("----------------------------------------------------\n");
    }

    void Damage(int _Att)
    {
        printf_s("NPC가 %d의 데미지를 입었습니다.\n", _Att);
        Hp -= _Att;
    }

public:
    NPC(int _Hp, int _Att) : FightUnit(_Hp, _Att)
    {

    }
};



class FightZone
{
public:
    void Fight(FightUnit* _Player, FightUnit* _Monster)
    {
        while (true)
        {
            system("cls");

            _Player->StatusRender();
            _Monster->StatusRender();
            _getch();
            _Monster->Damage(_Player->GetAtt());
            if (true == _Monster->IsDeath())
            {
                printf_s("몬스터가 죽었습니다");
                return;
            }
            _getch();
            _Player->Damage(_Monster->GetAtt());
            if (true == _Player->IsDeath())
            {
                printf_s("플레이어가 죽었습니다");
                return;
            }
            _getch();
        }
    }

};


int main()
{
    Player NewPlayer = Player(10, 100);
    Monster NewMonster = Monster(10, 100);
    NPC NewNPC = NPC(10, 100);

    FightZone NewFightZone;

    NewFightZone.Fight(&NewPlayer, &NewMonster);
    NewFightZone.Fight(&NewPlayer, &NewNPC);

    //NewPlayer.GetAtt();
    //NewPlayer.IsDeath();

    std::cout << "Hello World!\n";
}
