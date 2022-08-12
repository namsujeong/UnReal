// TextRpgClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

void Function() {

}

void Function(int _Value) {

}

class FightUnit 
{
protected:
    int Hp;
    int Att;

public:
    virtual void StatusRender()
    {
    }

    virtual int GetAtt()
    {
        return this->Att;
    }

    virtual int IsDeath()
    {
        return this->Hp <= 0;
    }

    virtual void Damage(int _Att)
    {
    }

public:
    FightUnit(int _Hp, int _Att) : Hp(_Hp), Att(_Att)
    {

    }
};

class Player : public FightUnit
{
public:
    void StatusRender() override
    {
        printf_s("플레이어의 능력치 -------------------------------------\n");
        printf_s("Hp %d\n", Hp);
        printf_s("Att %d\n", Att);
        printf_s("----------------------------------------------------\n");
    }


    void Damage(int _Att)  override
    {
        printf_s("플레이어가 %d의 데미지를 입었습니다.\n", _Att);
        Hp -= _Att;
    }

public:
    Player(int _Hp, int _Att ) : FightUnit(_Hp, _Att)
    {

    }
};

class Monster : public FightUnit
{
public:
    void StatusRender() override
    {
        printf_s("몬스터의 능력치 -------------------------------------\n");
        printf_s("Hp %d\n", Hp);
        printf_s("Att %d\n", Att);
        printf_s("----------------------------------------------------\n");
    }

    void Damage(int _Att) override
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
    void StatusRender() override
    {
        printf_s("상점주인의 능력치 -------------------------------------\n");
        printf_s("Hp %d\n", Hp);
        printf_s("Att %d\n", Att);
        printf_s("----------------------------------------------------\n");
    }

    void Damage(int _Att) override
    {
        printf_s("상점주인이 %d의 데미지를 입었습니다.\n", _Att);
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
    // 업캐스팅을 이용할수 있게 됩니다.
    // 관리가 편해집니다.
    // 싸울수 있는 유닛이 싸우는 기능을 담당하기 때문에
    // 그 자식인 player monster냐는 중요해지지 않는다.
    // 그러면서도 Player은 특성은 자연스럽게 드러나게 코딩을 할수가 있습니다.
    void Fight(FightUnit* _Left, FightUnit* _Right)
    {
        while (true)
        {
            system("cls");

            _Left->StatusRender();
            _Right->StatusRender();
            _getch();
            _Right->Damage(_Left->GetAtt());
            if (true == _Right->IsDeath())
            {
                printf_s("몬스터가 죽었습니다");
                return;
            }
            _getch();
            _Left->Damage(_Right->GetAtt());
            if (true == _Left->IsDeath())
            {
                printf_s("플레이어가 죽었습니다");
                return;
            }
            _getch();
        }
    }
};

// 전역 함수나 전역 변수는 객체와 멀어진겁니다.
// main 객체지향에서 => 
int main()
{
    Player NewPlayer = Player(100, 10);
    Monster NewMonster = Monster(100, 10);
    NPC NewNPC = NPC(100, 10);
    FightZone Zone;

    // Zone.Fight(&NewPlayer, &NewMonster);

    Zone.Fight(&NewPlayer, &NewNPC);
}
