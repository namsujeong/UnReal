// 061_NameSpace.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 어떠한 클래스나 변수나 모든 의미있는 이름에
// 분류를 넣을수가 있습니다.

int a;

class Monster {

};

namespace AProgrammer
{
    Monster NewMonster;
}

namespace BProgrammer
{
    Monster NewMonster;
}

namespace MyContent
{
    int b;
}

// 얼마든지 영역을 닫았다가.
namespace MyContent
{
    int c;
}

// 다시 namespace영역을 열수가 있다.
namespace MyContent
{
    int d;
}

namespace MyContent
{
    int e;
}

int main()
{
    a = 20;
    // 네임스페이스 내부에 존재하는 변수나 클래스는
    // 네임스페이스의 이름이 앞쪽에 분류로 들어가게 됩니다.
    // 네임스페이스의이름::뭔가(class 객체)
    MyContent::b = 50;
    MyContent::c = 50;
    // MyContent::

    std::cout << "Hello World!\n";
}
