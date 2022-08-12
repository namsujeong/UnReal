// 052_New.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{

public:
    //void* operator new(size_t _Size) 
    //{
    //}
};

//자료형* new 자료형() {
//
//}

//int* new int() {
//
//}

int main()
{
    // iostream안에 있는 함수로

    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // 힙을 사용하려면
    // new 라는 연산자와 포인터를 통해서
    // new 라는 이미 정의된 함수를 통해서 힙을 사용할 수 있습니다.

    // new라는 연산자는 기본적으로 특정한 자료형의 포인터를 리턴합니다.
    int* Ptr = new int(100);
    Ptr = new int(100);
    Ptr = new int(100);
    Ptr = new int(100);

    // 그렇게 잃어버린 메모리를 릭이라고 합니다.
    // 이 릭은 c++프로그래머들 사이에서는 치욕
    // 자기가 발생시키면 치욕.
    // 이걸 발생시키면 미숙하다는 겁니다.

    //int* Ptr0 = new int(0);
    //int* Ptr1 = new int(1);
    //int* Ptr2 = new int(2);
}
