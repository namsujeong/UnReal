// 071_Static.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

// static은 객체에 속한 맴버변수가 아니라 클래스에 속한 맴버변수를 만드는 문법이다.

// int Value;

class Global 
{
public:

};

//class GEngineValue 
//{
//public:
//    int AllLightCount
//};

class Monster
{
public:
    static int AllMonsterCount;

public:
    // 전역변수적인 속성을 지니는 변수
    //static const int npos;
    int Att;

    //void Death() 
    //{

    //}

public:
    Monster() 
    {
        AllMonsterCount += 1;
    }

    ~Monster()
    {
        AllMonsterCount -= 1;
    }

};

// 실체
int Monster::AllMonsterCount = 0;

int main()
{
    // std::string::npos;

    // Monster::AllMonsterCount;

    Monster NewMonster0;
    Monster NewMonster1;
    Monster NewMonster2;

    // Monster::AllMonsterCount = 10;

    std::cout << "Hello World!\n";
}
