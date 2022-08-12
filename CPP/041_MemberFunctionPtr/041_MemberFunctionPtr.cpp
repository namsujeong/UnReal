// 041_MemberFunctionPtr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Test 
{
public:
    void TestFunction() 
    {
        printf_s("맴버 함수입니다");
    }
};

int main()
{

    Test NewTest;

    // Test:: 함수다 라는것을 표현하기 위한 문법입니다.
    void(Test::*Ptr)() = &Test::TestFunction;

    // 함수포인터의 주소값이죠?
    // Ptr

    // 이런식으로 맴버함수 포인터를 사용할수가 있다.
    (NewTest.*Ptr)();

    void(Test::*PtrArr[10])();
    PtrArr[0] = &Test::TestFunction;

    // 전역과 다르게 아래와 같은 호출이 안된다.
    // PtrArr[0]();

    // 다시 이와같이 2중포인터로도 만들수가 있습니다.
    void(Test:: **PtrArr2D)();
    PtrArr2D = PtrArr;

    std::cout << "Hello World!\n";
}
