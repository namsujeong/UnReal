// 027_ConstAndRValueLValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // LValue란
    int Value;
    // LValue       RValue
        Value     = 1000;


    bool* bPtr;
    int iPtr;

    // 내가 const를 붙여서 의도적으로 만들어 낼수도 있습니다.
    // 이렇게 const 앞으로 수정될수 있나요 없나요?
    // 무조건 초기값을 넣어줘야 합니다.
    // 그래서 이런형태의 const 변수를 사용합니다.
    const int Value = 1000;

    if (Value < 200)
    {

    }

    if (Value < 500)
    {

    }

    // c++은 타입이 다른 변환은 허용하지 않는다.
    // iPtr = bPtr;

    // LValue가 될수있는 녀석은
    // 다음과 같은 조건이 있다.
    // 1. 수정할수 있는 값이어야 한다.

        //nullptr = nullptr;
        //1000 = Value;

    // RValue가 될수있는 조건은
    // 1. 언어에서 호환을 지원하는 타입이어야 한다.

    int const Value1 = 0;
    // 선생님은 앞에 쓰는걸 선호합니다.

    int Test;
    // const int AAA;

    // 포인터를 const로 바꾸는건 조금더 복잡해집니다.

    {
        const int TestConst = 300;
        // 크기 : 4
        // 형태 : 상수형 int
        // 위치 : 100번지
        // 값 : 300
        // TestConst = 5000;
        std::cout << "Hello World!\n";

        // 포인터를 선언했다고 쳐보겠습니다. 
        // 한번 const가 붙은 녀석은 

        // 수정할수 있는 int의 주소값을 받을수 있죠?
        // 수정할수 없는 int의 주소값을 받을수가 없다.
        // int* Ptr = &TestConst;

        const int* const Ptr = &TestConst;
        // 크기 : 8
        // 형태 : 상수형 int의 포인터 == 주소값
        // 위치 : 120번지
        // 값 : 100번지

        // 내가 가리키고 있는 녀석을 수정하려고 하는 거죠?
        // *Ptr = 20;

        // 포인터 뒤 const를 통해서 포인터 자체의 주소값의 수정을 막을수가 있습니다.
        Ptr = nullptr;
    }
}
