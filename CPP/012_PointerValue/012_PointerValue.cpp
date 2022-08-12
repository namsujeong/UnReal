// 012_PointerValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// int PlayerHp = 20;

void PlayerDamage(int* _HpPtr) 
{
    *_HpPtr -= 20;
}

// int gPlayerHp;

void TestName() {
    int /*TestName::*/PlayerHp = 200;
}

int main()
{
    // int mainPlayerHp = 200;
    int PlayerHp = 200;

    // *11812315번지

    // 변수가 선언되면
    // 변수에는 다음의 정보들이 담겨져 있다.
    // 자료형 4바이트 => 바이트 크기
    //       정수 => 처리형태
    // 이름 프로그램내에서의 위치

    PlayerDamage(&PlayerHp);
} // PlayerHp파괴
// gPlayerHp파괴