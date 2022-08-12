// 050_Desturcter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit 
{
protected:
    int Hp;

public:
    // 생성자
    FightUnit() {
        printf_s("부모 생성자.");
    }

    // 소멸자
    // 1. 소멸자의 이름은 ~클래스명으로 통일
    // 2. 맴버변수처럼 호출도 가능하지만
    //    선생님이 8년이 넘는 코딩인생동안 직접 호출하는 
    //    프로그래머는 단 1번도 본적 없습니다.
    ~FightUnit() {
        printf_s("부모 소멸자.");
    }
};

class Player : public FightUnit
{
public:
    // 생성자
    Player() 
    {
        Hp = 200;
        printf_s("자식 생성자.");
    }

    // 소멸자
    // 1. 소멸자의 이름은 ~클래스명으로 통일
    // 2. 맴버변수처럼 호출도 가능하지만
    //    선생님이 8년이 넘는 코딩인생동안 직접 호출하는 
    //    프로그래머는 단 1번도 본적 없습니다.
    ~Player() 
    {
        if (Hp)
        {
            // 뭔가를 한다.
            int a = 0;
        }
        

        printf_s("자식 소멸자.");
    }
};

int main()
{
    Player NewPlayer = Player();

    // NewPlayer.~Player();

    // std::cout << "Hello World!\n";
}
