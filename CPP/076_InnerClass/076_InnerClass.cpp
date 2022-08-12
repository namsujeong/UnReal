// 076_InnerClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


// 그냥 클래스 2개 만든겁니다.
// UpperClass::InnerClass 
// 1. 일반적으로는 소유권때문
// InnerClass 를 UpperClass 내부에서만 사용하게 하고 싶을때
// Node 왜 숨기고 싶지

// 2. 외부에 인터페이스로 제공하고 싶을때
// 함수 하나로는 부족하고 기능이 집약되어있는 또하나의 내부기능을 만들어서
// 그걸 외부에 공개하고 싶을때입니다.
// iterator
// iterator은 외부에 공개하고 싶지?

//class UpperClass::InnerClass
//{
//private:
//    int Value;
//};


class UpperClass 
{
public:
    // UpperClass :: InnerClass 
    // 자꾸 이상한 생각을 합니다.
    class InnerClass 
    {
    private:
        int Value;
    };

    void Test() 
    {
        // 
        // Value;
    }
};

class Player 
{
public:
    int 체력;
    int 방어력;
    int 감쇠율;

public:
    void Damage(int _Damage) 
    {
        // 체력 -= _Damage - /*방어력 / 2*/;
        체력 -= _Damage - 감쇠율;
    }

    void SetDef(int _Def) 
    {
        방어력 = _Def;
        감쇠율 = _Def / 2;
    }



};

int main()
{
    UpperClass::InnerClass;

    std::cout << "Hello World!\n";
}
