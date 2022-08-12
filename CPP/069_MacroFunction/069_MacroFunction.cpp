// 069_MacroFunction.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// #define 을 매크로라고 부르는데

#define Macro 1


// 매크로 함수라고 부르게 됩니다.

// 매크로 함수를 별로 선호하지 않습니다.

// 디버깅이 까다롭기 때문에 매크로 함수를 

#define Plus(Value) Value + Value

#define Mul(Value) Value * Value

int Function(int Value) 
{
    return Value + Value;
}

int main()
{
    // std::cout << Plus(10) << std::endl;;

    std::cout << 10 + 10 << std::endl;;

    std::cout << Function(10) << std::endl;;

    std::cout << Mul(Plus(10)) << std::endl;;

    std::cout << 10 + 10 * 10 + 10 << std::endl;;
}
