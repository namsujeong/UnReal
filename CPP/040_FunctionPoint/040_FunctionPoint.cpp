// 040_FunctionPoint.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Test() 
{
    printf_s("함수입니다");
}

int main()
{
    // 함수도 결국 코드영역에 메모리 위치가 있습니다.
    // 함수라는 것도 결국 주소값이 존재할 것이다.
    // 어딘가에 존재해야 그녀석을 사용할 수 있으니까.

    Test();

    // 아래와 같은 문법을 함수포인터라고 합니다.
    void(*FunctionPtr)() = &Test;

    void(*FunctionPtrArr[10])();

    FunctionPtr();

    int FunctionPointerSize = sizeof(FunctionPtr); 

    // 이런식으로 당연히 배열로도 쓸수가 있습니다.
    FunctionPtrArr[0] = FunctionPtr;

    FunctionPtrArr[0]();

    int IntArr[10];
    int* intPtr = IntArr;

    {
        void(**FunctionPtr2D)() = FunctionPtrArr;
        FunctionPtr2D[0]();

        int Ptr2DSize = sizeof(FunctionPtr2D);

        int a = 0;
    }
}
