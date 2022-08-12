// 033_ClassDefault.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 아무것도 하지 않고 클래스만 생성하는 순간
// 다음의 것들이 만들어 진다.
class TestClass 
{
// private: // 디폴트 접근제한 지정자

// public:
    // 디폴트 생성자
    // 만약내가 다른 생성자를 1개라도 만들었다면 만들어지지 않는다.
    //TestClass() 
    //{
    //}

    // 디폴트 복사 생성자
    //TestClass(const TestClass& _Other) 
    //{
    //}

    // 디폴트 대입연산자
    //TestClass operator=(const TestClass& _Other) 
    //{
    //}

    // 2개가 더 존재하는데 개념이 굉장히 어렵기 때문에 다음에 하겠습니다.

public:
    TestClass(int Value) 
    {

    }
};

int main()
{
    // TestClass NewClass0 = TestClass();

    TestClass NewClass = TestClass(10);
    // 이녀석은 
    // TestClass NewClass2 = TestClass(NewClass);

    std::cout << "Hello World!\n";
}
