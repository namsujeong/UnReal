// 075_PP.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyNumber 
{
public:
    int Value;

    // 이걸 전치
    int& operator++() 
    {
        Value += 1;
        return Value;
    }

    // 후치
    int operator++(int)
    {
        int ReturnValue = Value;
        Value += 1;
        return ReturnValue;
    }

public:
    MyNumber() 
        : Value(0)
    {

    }

};

int main()
{
    MyNumber NewNumber = MyNumber();
    int Value = 0;
    Value = ++NewNumber;
    Value = NewNumber++;
}
