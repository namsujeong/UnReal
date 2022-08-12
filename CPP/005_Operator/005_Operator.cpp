// 005_Operator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int Plus(int _Left, int _Right)
{
    return _Left + _Right;
}

int main()
{

    int Left = 7;
    int Right = 3;
    int Result;

    // 연산자는 
    // 단항연산자
    // 변수가 1개만 있어도 쓸수있는 연산자
    // 이항연산자
    // 변수가 2개 있어야 쓸수 있는 연산자
    // 삼항 연산자
    // 변수가 3개 있어야 쓸수 있는 연산자


    // 이항 사칙연산자
    Result = Left + Right;// 더하기
    Result = Left - Right;// 빼기
    Result = Left * Right;// 곱하기
    Result = Left / Right;// 나누기
    //       1   -  3
    Result = Left % Right;// 나머지 1
    // 이런게 단항 연산자 입니다.
    Result = -Left;

    // 1바이트 논리형
    // 오른쪽에 있는 메모리 영역이 참이면
    // true라는 상수가 됩니다.
    // 거짓이라면 false라는 상수가 됩니다.
    bool TrueAndFalse = Left;

    int MyMana = 200;
    int QMana = 90;

    // 그다면
    bool QSkillUseCheck = false;
    QSkillUseCheck = MyMana > QMana;
    QSkillUseCheck = MyMana < QMana;
    QSkillUseCheck = MyMana == QMana;
    QSkillUseCheck = MyMana != QMana;
    QSkillUseCheck = MyMana >= QMana;
    QSkillUseCheck = MyMana <= QMana;

    bool IsDeath = false;
    // 내가 죽었는지 안죽었는지 
    int HP= 0;

    bool IsAngle = true;

    //         참          거짓
    IsDeath = 0 >= HP && false == IsAngle;
    //          왼쪽  &&  오른쪽이 모두 참이라면 true
    
    //         참          거짓
    IsDeath = 0 >= HP || false == IsAngle;
    //          왼쪽  ||  오른쪽이 모두 참이라면 true

    // isAngle이 false가 되려면?
    IsAngle = !(0 >= HP && true == IsAngle);

    // 참과 거짓에 대해서 알아 봅시다.
    // Left는 7 참
    // 0이 아닌 모든수는 참이에요
    // 0만이 거짓입니다.

    // 00000000 00000100 00000000 00000000
    // 그 참과 거짓을 표현하기 위한 자료형이 있습니다
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
