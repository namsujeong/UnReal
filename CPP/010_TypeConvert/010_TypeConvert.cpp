// 010_TypeConvert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    {
        // c++의 첫번째 규칙
        // 절대로 int => bool 
        // bool => int가 되는것은
        // 절대로 정상적인 뭔가를 해주는 동작인 겁니다.
        // 자료형이 바뀐다
        // int 4
        // bool 1
        int Test0 = 2;
        // 절대로 그냥 이루어지는게 아닙니다.
        bool Test = Test0;
        // 내부에서 어떠한 연산을 통해서 4바이트 => 1바이트 바꿔주는 작업이 우리도 모르는 사이에 벌어진겁니다.
        // 암시적 형변환이라고 합니다. c++이라는 언어가 기본적으로 허용하는 변환이라는 겁니다.
        // 암시적 형변환이 안될때까 있는데.

        int AAAA = 2000;

        int* TestPtr = &AAAA;


        // 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000
        //                                     00000000 00000000 00000000 00000000

        __int64 Test64 = 0;

        // 명시적 형변환이라고 합니다.
        Test0 = reinterpret_cast<int>(TestPtr);
        Test64 = reinterpret_cast<__int64>(TestPtr);
        int a = 0;
    }
    {
        int Test;

        // c++ 이 명시적 형변환을 4가지로 쪼개놨고 프로그래머가 이 4가지 형변환을 상황에 맞춰서 사용하라고 정의했습니다.

        // 형변환이란 둘이 다르면 무조건 일어나는 일이고
        // 여러분들이 아무것도 안해줬다면 암시적으로 일어난 겁니다.
        // 형변환도 연산이기 때문에 최적화를 
        // 첫번째 값과 값의 형변환
        bool Check = true;
        Test = static_cast<int>(Check);

        // 두번째 정수 => 포인터 포인터 => 정수
        int* Ptr = 0;
        Test = reinterpret_cast<int>(Ptr);

        // dynmic cast라는 애가 있는데
        // 지금 설명을 해줄수가 없다
        // int* Ptr = 0;
        // Test = dynamic_cast<>(Ptr);

        // const cast라는 애가 있는데
        // 지금 설명을 해줄수가 없다
        // int* Ptr = 0;
        // Test = const_cast<>(Ptr);
    }
}
