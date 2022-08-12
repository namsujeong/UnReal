// 011_PointerOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 100번지
    int Value = 0;

    // 100번지
    int* Ptr = &Value;
    __int64 OriginAddRess = reinterpret_cast<__int64>(Ptr);
    int a = 0;

    {
        // 포인터는 지금 
        // 포인터가 가르키고 있는 위치의 값이다.
        // 100번지의 값을 2000으로 바꾸라는 겁니다.
        *Ptr = 2000;
        int a = 0;
    }

    {
        // *(Ptr + 0) = 3000;
        Ptr[0] = 3000;

    }


    {
        //  포인터의 - 연산은
        //             100 - 3 * * 기호 앞 자료형의 바이트
        int* MovePtr = Ptr - 3;
        __int64 AddRess = reinterpret_cast<__int64>(MovePtr);
        int a = 0;
    }

    {
        //  포인터의 - 연산은
        //             100 + 3 * * 기호 앞 자료형의 바이트
        int* MovePtr = Ptr + 3;
        __int64 AddRess = reinterpret_cast<__int64>(MovePtr);
        int a = 0;
    }
    
}
