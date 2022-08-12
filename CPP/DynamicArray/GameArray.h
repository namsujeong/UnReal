#pragma once

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
    GameArray()
        : Array(nullptr)
        , Size(0)
    {

    }

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