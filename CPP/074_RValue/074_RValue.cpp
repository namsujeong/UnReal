// 074_RValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 최적화 때문입니다.

class A 
{
public:
    int* NewInt;

public:
    A() 
        : NewInt(new int())
    {

    }

    A(const A& _Other)
        : NewInt(new int(*_Other.NewInt))
    {

    }

    // Rvalue 레퍼런스 생성자
    // 이동생성자라고 부릅니다.
    // 지역변수로 파괴될 녀석이구나.
    A(A&& _Other)
        : NewInt(_Other.NewInt)
    {
        // Move 내가 소유권을 넘겨 받은거야.
        _Other.NewInt = nullptr;
    }


    ~A()
    {
        if (nullptr != NewInt)
        {
            delete NewInt;
        }
    }

};


// 여기서 동적할당이 됐죠.
A NewACreate() 
{
    // 500 바이트가 만들어짐
    A NewA;
    return NewA;
}

int main()
{
    {
        A NewA0;

        (*NewA0.NewInt) = 1000;

        A NewA1 = NewA0;
    }

    {
        // 500바이트를 만듬.
        // 500바이트를 넘겨 받음
        A NewA = NewACreate();
    }

    std::cout << "Hello World!\n";
}
