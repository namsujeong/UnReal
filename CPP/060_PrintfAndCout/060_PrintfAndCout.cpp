// 060_PrintfAndCout.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyCoutClass
{
public:
    void operator<<(const char* const _Other) 
    {
        printf_s(_Other);
    }
};

MyCoutClass mycout = MyCoutClass();

int main()
{
    std::cout << "Hello World!\n";
    mycout << "Hello World!\n";
}
