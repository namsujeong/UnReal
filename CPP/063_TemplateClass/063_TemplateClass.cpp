// 063_TemplateClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// ValueType이름은 내가 마음대로 할수 있고
// 템플릿을 어려워하는 사람들은 직접 싫어하는 사람들이 가장 어려워합니다.
// 선생님의 경우에는 왜 이해를 못하느냐?

template<typename ValueType>
class Test 
{
public:
    ValueType Value;
};

// 템플릿이 될수있는 녀석들은 
template<typename ValueType0, typename ValueType1>
class Test2
{
public:
    ValueType0 Value;
    ValueType1 Value;
};

class Test2intbool
{
public:
    int Value;
    bool Value;
};

//class Testint
//{
//public:
//    int Value;
//};
//
//class Testbool
//{
//public:
//    bool Value;
//};
//
//class Testintptr
//{
//public:
//    int* Value;
//};

// 나는 지역변수가 3개고 실행되는데 n바이트가 필요해
template<typename PrintType>
void TestPrint(PrintType _Value)
{
    std::cout << _Value << std::endl;
}


// 나는 지역변수가 3개고 실행되는데 n바이트가 필요해
int main()
{
    // 클래스는 함수와 다르게 인자추론이 불가능하다.
    // 클래스는 무조건 자료형을 명시해줘야 합니다.
    // 템플릿 문법으로 클래스명<자료형>을 명시해줘야 하는겁니다.
    Test<int> NewTestInt;
    Test<bool> NewTestBool;
    Test<int*> NewTestBool;

    // 함수의 크기는 기본적으로 정적이에요
    //Test NewTestInt111;
    //NewTestInt111.Value = 1000;
    //NewTestInt111.Value = "fasdfasd";

    //int Arr[100];
    //int Arr[50];

    TestPrint/*<int>*/(100);

    TestPrint/*<const char*>*/("하하하");

    TestPrint/*<bool>*/(true);


    //Testint NewTestInt;
    //Testbool NewTestBool;
    //Testintptr NewTestintptr;
}
