// DynamicArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <array>

template<typename DataType>
class GameArray
{
private:
    DataType* Array;
    int Size;
    // 공개
public:
    int GetSize()
    {
        return Size;
    }

    GameArray& operator=(const GameArray& _Other)
    {
        Copy(_Other);
        return *this;
    }

    // 여태까지 배웠던 문법들의 총 집합
    DataType& operator[](int _Index)
    {
        // 포인터 연산
        return Array[_Index];
    }

    void ReSize(int _Size)
    {
        DataType* PrevMemory = Array;
        int PrevSize = Size;

        int CopyCount = CopyCount = _Size > PrevSize ? PrevSize : Size;;

        Array = new DataType[_Size];
        Size = _Size;
        for (int i = 0; i < CopyCount; i++)
        {
            Array[i] = PrevMemory[i];
        }
        // 기존 메모리를 다 옮기고 지웁니다.
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
    // 생성자부터가 이미 이 GameArray라는 것에 맞춰서 디자인되는 생성자를 가지게 됩니다.
    GameArray(int _Size)
        : Array(nullptr) // 메모리가 생성될때 Array을 nullptr로 해서 초기화 해주는 것.
    {
        // 방어코드라는것을 쳐야 합니다.
        // 나도 말도 안되는 값들을 넣어주면 방어를 해야합니다.

        // 예전에 그냥 받아들어야 하는게 아니게 됩니다. 다의도가 있게 됩니다.
        // 
        if (_Size == 0)
        {
            // 함수를 그냥 종료해 버립니다.
            return;
        }

        // 동적할당을 통해서
        // 동적바인딩을 할수가 있고
        // 힙을 이용해서 언제든지 배열의 크기를
        // 밴경할수가 있게 된겁니다.
        // Array = new Item[_Size];

        // 기능은 작은 기능을 만들고 그 기능을 이용해서 다른 기능들을 만드는 겁니다.
        ReSize(_Size);
    }

    // 왠만하면 다 정의해줘야 합니다.
    GameArray(const GameArray& _Other)
    {
        // 깊은 복사
        // 값을 새롭게 할당하는것이지 복사하는 녀석이 
        ReSize(_Other.Size);
        Copy(_Other);
    }

    ~GameArray()
    {
        // 안전한 지우기
        if (nullptr != Array)
        {
            delete[] Array;
        }
    }
};

class Myarrayint5 {

};

class Myarrayint4 {

};

int main()
{
    {
        GameArray<int> IntArray = GameArray<int>(10);

        for (int i = 0; i < IntArray.GetSize(); i++)
        {
            IntArray[i] = i;
        }

        for (int i = 0; i < IntArray.GetSize(); i++)
        {
            std::cout << IntArray[i] << std::endl;
        }
    }

    {
        GameArray<const char*> BoolArray = GameArray<const char*>(10);

        for (int i = 0; i < BoolArray.GetSize(); i++)
        {
            BoolArray[i] = "test";
        }

        for (int i = 0; i < BoolArray.GetSize(); i++)
        {
            std::cout << BoolArray[i] << std::endl;
        }
    }

    // 동적배열이라는 필요다라고 생각했군요.
    std::array<int, 4> Array0;
    // std::arrayint4

    // 다른 크기의 배열이 대입될 필요는 없
    std::array<int, 5> Array1;
    // std::arrayint5

    // std::array<int, 5> Array1;

    // Array0 = Array1;

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
