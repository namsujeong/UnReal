#pragma once

template<typename DataType>
class GameArray
{
private:
    DataType* Array;
    int Size;
    // ����
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

    // ���±��� ����� �������� �� ����
    DataType& operator[](int _Index)
    {
        // ������ ����
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
        // ���� �޸𸮸� �� �ű�� ����ϴ�.
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

    // �����ں��Ͱ� �̹� �� GameArray��� �Ϳ� ���缭 �����εǴ� �����ڸ� ������ �˴ϴ�.
    GameArray(int _Size)
        : Array(nullptr) // �޸𸮰� �����ɶ� Array�� nullptr�� �ؼ� �ʱ�ȭ ���ִ� ��.
    {
        // ����ڵ��°��� �ľ� �մϴ�.
        // ���� ���� �ȵǴ� ������ �־��ָ� �� �ؾ��մϴ�.

        // ������ �׳� �޾Ƶ��� �ϴ°� �ƴϰ� �˴ϴ�. ���ǵ��� �ְ� �˴ϴ�.
        // 
        if (_Size == 0)
        {
            // �Լ��� �׳� ������ �����ϴ�.
            return;
        }

        // �����Ҵ��� ���ؼ�
        // �������ε��� �Ҽ��� �ְ�
        // ���� �̿��ؼ� �������� �迭�� ũ�⸦
        // ����Ҽ��� �ְ� �Ȱ̴ϴ�.
        // Array = new Item[_Size];

        // ����� ���� ����� ����� �� ����� �̿��ؼ� �ٸ� ��ɵ��� ����� �̴ϴ�.
        ReSize(_Size);
    }

    // �ظ��ϸ� �� ��������� �մϴ�.
    GameArray(const GameArray& _Other)
    {
        // ���� ����
        // ���� ���Ӱ� �Ҵ��ϴ°����� �����ϴ� �༮�� 
        ReSize(_Other.Size);
        Copy(_Other);
    }

    ~GameArray()
    {
        // ������ �����
        if (nullptr != Array)
        {
            delete[] Array;
        }
    }
};