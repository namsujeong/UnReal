// 014_Return.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 이 행동의 결과를 하나의 자료형으로 반환해 줄수 있습니다.

// 결과 이름 인자
// {
// }
int Function() 
{
    printf_s("100을 리턴하는 함수입니다.\n");
    return 100;
}

void FunctionNotReturn()
{
    printf_s("아무것도 리턴 안하는 함수입니다.\n");
    return;
}

int main()
{

    int Value = Function();
    return 0;

    FunctionNotReturn();
}
