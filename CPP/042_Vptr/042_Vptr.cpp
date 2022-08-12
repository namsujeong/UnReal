// 042_Vptr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit
{
    // virtual 을 만들게 되면
    // 내부에서 

    // void(FightUnit**::_vfptr)();

public:
    // 부모쪽에서는 아무것도 안한다.
    virtual void StatusRender()
    {
        printf_s("부모의 StatusRender 함수");
    }

    // 부모쪽에서는 아무것도 안한다.
    virtual void Damage()
    {
        printf_s("부모의 Damage 함수");
    }

    void TestFunction() 
    {
        printf_s("그냥 만들어본 함수");
    }

public:
    FightUnit() 
    {
        this;
    }

};

class Player : public FightUnit
{
public:
    // 부모쪽에서는 아무것도 안한다.
    // 자식쪽에서는 override를 통해서 이 함수가 부모의 함수를 오버라이드했다는 것을 명시할수 있다.
    void StatusRender() override
    {
        printf_s("자식의 StatusRender 함수");
    }

public:
    Player() : FightUnit()
    {
        this;
    }
};

// 부모의 참조형으로 실행했는데ㅐ.
void StatusTest(FightUnit* _Ptr)
{
    // 부모형의 참조형으로 사용했음에도 자식의 함수가 호출된다면
    // 이걸 오버라이딩이라고 합니다.
    _Ptr->StatusRender();
}

int main()
{
    FightUnit NewFightUnit;

    // 자식의 생성자가 호출되면서 부모의 함수를 자신이 만든 함수로 대체하게 됩니다.
    Player NewPlayer;

    int FightUnitSize = sizeof(NewFightUnit);

    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
