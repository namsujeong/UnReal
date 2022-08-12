// 030_ClassOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Number 
{
private:
    int Value;
    int Value0;
    int Value1;
    int Value2;
    int Value3;
    int Value4;
    int Value5;
    int Value6;
    int Value7;
    int Value8;

public:
    // 연산자 오버로딩
    // 연산자 겹지정 이라고 합니다.
    Number operator+(const Number& _Value)
    {
        return Number(Value + _Value.Value);
    }
    Number operator+(const int& _Value)
    {
        return Value + _Value;
    }

    // 대부분의 연산자를 겹지정 할수가 있습니다.
    Number operator-(const Number& _Value)
    {
        return Number(Value - _Value.Value);
    }

    // 대부분의 연산자를 겹지정 할수가 있습니다.
    bool operator>(const Number& _Value)
    {
        return Value > _Value.Value;
    }

    // 오버로딩을 어디까지 가능한지 싹다 보여주기는 힘들겁니다.
    // 이건 규칙인데.
    Number operator-()
    {
        return Number(-Value);
    }

    // 이걸 함수 오버로딩이라고 합니다.
    void Test() 
    {

    }

    void Test(int _Value) 
    {

    }

public:
    Number(int _Int) 
        : Value(_Int)
    {

    }
};

int main()
{
    {
        int Left = 7;
        int Right = 3;
        int Result = 0;
        Result = Left + Right;

        if (Left > Right)
        {

        }
    }

    {
        int IntLeft = 7;
        int IntRight = 3;

        Number Left = 7;
        Number Right = 3;
        Number Result = 0;
        // 문법의 본질을 알아야 합니다.
        Result = Left + Right;
        // Result = Left.operator+(Right);
        Result = Left - Right;

        // 또 생략된 겁니다.
        Result = Left.operator+(IntRight);

        if (Left > Right)
        {

        }

        Number Test = -Left;

        Left.Test();
        Left.Test(1000);
    }

    std::cout << "Hello World!\n";
}