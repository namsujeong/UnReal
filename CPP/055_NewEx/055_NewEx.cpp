// 055_NewEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // 1. new delete는 c++의 기본적인 연산자중에서
    // 가장 느립니다.
    // 

    // 내가 delete를 안하면
    //int* NewTest0 = new int();
    //int* NewTest1 = new int();
    //int* NewTest2 = new int();
    //int* NewTest3 = new int();
    //int* NewTest4 = new int();
    //int* NewTest5 = new int();
    //int* NewTest6 = new int();
    //int* NewTest7 = new int();
    //int* NewTest8 = new int();
    //int* NewTest9 = new int();
    // 이렇게 할당하는 방법보다는
    //delete NewTest3;
    //int* NewPtr = new int();
    //int* NewTest9 = new int();

    // 힙으로 할당하는것은 2가지 방식이 존재한다.

    // 그냥 자료형 그대로 할당하는 방법
    int* Ptr = new int();

    delete Ptr;

    // 배열로 할당하는 방법이 있습니다.
    // 연속적이거나 많은 수의 데이터를 만들어야 할때는
    int* ArrPtr = new int[10];

    // 이렇게 해도 되기는 되지만
    // 문제가 생길때가 존재합니다.
    // delete ArrPtr;
    // 배열 삭제를 이용하는것이 기본입니다.
    // 어 그냥 delete 해도 될때가 있어서요 => 박살이 납니다.
    // 문제가 생길수가 있으니까 절대로 그냥 delete로 애초에 배열을 지우지 않는게 좋습니다.
    delete[] ArrPtr;

    //ArrPtr[0];
    //ArrPtr[1];
    //ArrPtr[2];
    //ArrPtr[3];

    // delete Ptr;

    std::cout << "Hello World!\n";
}
