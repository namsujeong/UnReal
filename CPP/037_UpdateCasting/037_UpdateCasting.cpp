// 037_UpdateCasting.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 업캐스팅이란
// 자식클래스가 쉽게 부모형의 참조형이 될수 있는 것을 말한다.

class FightUnit 
{

};

class Player : public FightUnit
{

};

int main()
{
    Player NewPlayer0;

    // 자식인 Player 부모인 FightUnit로 아주 쉽게 형변환이 가능해지는 이 현상을 의미합니다.
    // 그리고 이 현상을 이용해서
    FightUnit* FightUnitPtr = &NewPlayer0;


    std::cout << "Hello World!\n";
}
