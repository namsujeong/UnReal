// 059_Template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//
//class Player
//{
//public:
//    int Hp;
//
//public:
//    int Damage(int _Damage) 
//    {
//        Hp -= _Damage;
//    }
//
//    // 무조건 쳐줘야 하는 겁니다.
//    int Damage(__int64 _Damage)
//    {
//        Hp -= _Damage;
//    }
//};
class GameArray
{
private:
    int* Array;
    int Size;

public:
    int GetSize()    {        return Size;    }
    GameArray& operator=(const GameArray& _Other)
    {
        Copy(_Other);
        return *this;
    }
    int& operator[](int _Index)
    {
        return Array[_Index];
    }
    void ReSize(int _Size)
    {
        int* PrevMemory = Array;
        int PrevSize = Size;

        int CopyCount = CopyCount = _Size > PrevSize ? PrevSize : Size;;

        Array = new int[_Size];
        Size = _Size;
        for (int i = 0; i < CopyCount; i++)
        {
            Array[i] = PrevMemory[i];
        }
        if (nullptr != PrevMemory)
        {
            delete[] PrevMemory;
        }
    }

    void Copy(const GameArray& _Other)
    {
        int OtherSize = _Other.Size;
        int CopyCount = Size > OtherSize ? OtherSize : Size;
        for (int i = 0; i < CopyCount; i++)
        {
            Array[i] = _Other.Array[i];
        }
    }

public:
    GameArray(int _Size)
        : Array(nullptr) 
    {
        if (_Size == 0)
        {
            return;
        }
        ReSize(_Size);
    }
    GameArray(const GameArray& _Other)
    {
        ReSize(_Other.Size);
        Copy(_Other);
    }

    ~GameArray()
    {
        if (nullptr != Array)
        {
            delete[] Array;
        }
    }
};


class MyEndlClass
{
};

// 이상황에서 사용할수 있는게 템플릿입니다.
// 1. 어떤 클래스나 함수가 코드가 완전히 동일하고
// 2. 변화해야하는게 자료형분일때입니다.

// 사용법
// 1. 위의 상황과 같은 함수 혹은 클래스를 찾는다.
// 2. 함수 혹은 클래스 위에 template<typename 나의 타입명>

class MyCoutClass
{
public:
    // PrintType 내가 마음대로 바꿀수 있다.
    template<typename PrintType>
    MyCoutClass& operator<<(PrintType _Value)
    {
        std::cout << _Value;
        return *this;
    }

    /*MyCoutClass& operator<<(const char* _Value)
    {
        std::cout << _Value;
        return *this;
    }

    MyCoutClass& operator<<(const int _Value)
    {
        std::cout << _Value;
        return *this;
    }*/


    MyCoutClass& operator<<(MyEndlClass& _Inst)
    {
        printf_s("\n");
        return *this;
    }

};


namespace std
{
    MyCoutClass MyCout;
    MyEndlClass MyEndl;
};

class Player 
{
public:
    int Hp;
};

// 알아서 되는것이 아니고.
// 컴파일 과정이 일어나면
// 함수의 경우에는 인자추론이라는것이 일어나서
// fullname의 템플릿함수명을 사용하지 않아도 된다.
// Template argument deduction (템플릿 인자 추론)

template<typename PrintType>
void TestPrint(PrintType _Value)
{
    std::cout << _Value << std::endl;
}

// 템플릿과 같은 이름의 함수를 사용하고 싶은데.
// 이 함수의 형태로는 처리할 수가 없을때
// 함수를 오버로딩
// 템플릿 특수화
// 특정 자료형에 특수화된 템플릿 함수를 따로 만든다입니다.

template<>
void TestPrint(Player _Value)
{
    std::cout << _Value.Hp << std::endl;
}


// 코드를 대신 쳐주는 문법이라고 합니다.

//void TestPrint<int>(int _Value)
//{
//    std::cout << _Value << std::endl;
//}
//
//void TestPrint<const char*>(const char* _Value)
//{
//    std::cout << _Value << std::endl;
//}

int main()
{
    // 잊으면 안되는게
    // TestPrint<int>(100)
    TestPrint/*<int>*/(100);

    TestPrint/*<const char*>*/("하하하");

    TestPrint/*<bool>*/(true);

    Player  NewPlayer = Player();

    TestPrint/*<bool>*/(NewPlayer);

    

    // std::cout << "cccc" << std::endl;

    //std::cout << 1000 << std::endl;

    //std::MyCout << 1000 << std::MyEndl;

    //int* ptr = nullptr;

    //std::cout << ptr << std::endl;

    //std::MyCout << ptr << std::MyEndl;

    // std::MyCout.operator<<<int*>(ptr) << std::MyEndl;


    // printf_s("%d", 200);

    // std::MyCout.operator<<("Test").operator<<(std::MyEndl);

    // std::MyCout << "Test" << std::MyEndl;
}