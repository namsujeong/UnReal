// 077_Test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <list>

class Actor 
{

};

class Monster : public Actor
{
    int Hp;

public:
    void Damage(int _Damage) 
    {
        Hp -= _Damage;
    }

    void Update() {

    }
};

class Player : public Actor
{
public:
    Monster* Monster;

public:
    void Update() 
    {
        Monster->Damage(20);
    }
};

int main()
{
    int a = 0;

    Player* NewPlayer = new Player();
    Monster* NewMonster = new Monster();

    NewPlayer->Monster = NewMonster;

    std::list<Actor*> NewList = std::list<Actor*>();
    NewList.push_back(NewPlayer);
    NewList.push_back(NewMonster);


    std::vector<Actor*> NewVector = std::vector<Actor*>();
    NewVector.push_back(NewPlayer);
    NewVector.push_back(NewMonster);


    // for을 돌리는 속력을 말하는게 아닙니다.
    for (Actor* Actor : NewList)
    {
        NewPlayer->Update();
    }

    for (Actor* Actor : NewVector)
    {
        NewPlayer->Update();
    }

}
