// StaticArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 기존 배열의 문제점을 

class Item
{
public:
    // 이녀석도 이미 배열입니다.
    char Name[10];

    void SetName(const char* _Name) 
    {
        strcpy_s(Name, 10, _Name);
    }

    void Render()
    {
        printf_s(Name);
        printf_s("\n");
    }

public:
    Item()
        : Name{"None"}
        // : Name{ _Name } 문법상 불가능합니다.
    {
        
    }


    Item(const char* _Name)
        // : Name{ _Name } 문법상 불가능합니다.
    {
        strcpy_s(Name, 10,_Name);
    }
};

// item이나 Monster가 n개다

// item이든 monster => class
// class가 n개가 있을수 있라는 개념으로 보고 처리하는 겁니다.

// Array <= 너무 대명사라 다른 곳에서 쓸수 있을것 같아서
// 나만의 것들을 만든겁니다.
// 너무 대명사인 클래스를 만드는건 굉장히 위험할 수 있다.

// Game이라는 것을 붙여서 이름이 혹시라도 겹칠수 있는 부분을 미리 막은겁니다.
// class는 객체를 만들수 있는 구조와 선언을 만드는 겁니다.
// 왜 배열을 만들지?
// class 
class GameArray 
{
private:
    Item* Array;
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
    Item& operator[](int _Index) 
    {
        // 포인터 연산
        return Array[_Index];
    }

    void ReSize(int _Size)
    {
        Item* PrevMemory = Array;
        int PrevSize = Size;

        int CopyCount = CopyCount = _Size > PrevSize ? PrevSize : Size;;

        Array = new Item[_Size];
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

class GameIntArray 
{
private:
    int* Array;
    int Size;
    // 공개
public:
    int GetSize()
    {
        return Size;
    }

    GameIntArray& operator=(const GameIntArray& _Other)
    {
        Copy(_Other);
        return *this;
    }

    // 여태까지 배웠던 문법들의 총 집합
    Item& operator[](int _Index)
    {
        // 포인터 연산
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
        // 기존 메모리를 다 옮기고 지웁니다.
        if (nullptr != PrevMemory)
        {
            delete[] PrevMemory;
        }
    }

    void Copy(const GameIntArray& _Other)
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
    GameIntArray(int _Size)
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
    GameIntArray(const GameIntArray& _Other)
    {
        // 깊은 복사
        // 값을 새롭게 할당하는것이지 복사하는 녀석이 
        ReSize(_Other.Size);
        Copy(_Other);
    }

    ~GameIntArray()
    {
        // 안전한 지우기
        if (nullptr != Array)
        {
            delete[] Array;
        }
    }
};


// 어떤 데이터가 다수가 있을

#define INVENCOUNT 10
const int InvenNumber = 10;

int main()
{
    // new를 사용했으니까 릭체크 합니다.
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // 게임에서 보면 몬스터는 동적할당을 합니다.
    // Monster* 
    // 처음부터 끝까지 개발마지막날 까지 100마리만 나올겁니다.
    // 이럴수가 없습니다.
    // 확답을 했다고 칩시다. 프로그래머가 100마리만 되게 코드를 짤께요.
    // 이런식으로 대처를 하면
    // 머릿속으로 저것도 또 바뀌겠지....
    
    // 인벤토리
    // 장착 슬롯
    // lol의 아이템은? 6개죠?
    // 언제나 고정입니까.
    // 패치가 되면바뀌고 
    // 프로그래머는 언제나 확장성 있게 짜야 합니다.
    // 언제든지 새로운 아이템 종류나 인벤토리가 줄어들든 늘어나든 상관이 없게 대비해야 합니다.
    // 경험이 없다면 절대로 쉽게 되지 않아요.
    // 신입과 경력을 나누는 기준이 이런데서 옵니다.
    // 굳이 대꾸할 필요도 없습니다.
    // 기획자한테 절대안바뀌는거죠? => 이런 말을 할필요 자체가 없습니다.
    // 그럴리가 없죠? 절대로 안바뀌죠 => 경험이 없다는 겁니다.
    // 애초에 말한대로는 되고 => 만약에 뒤에 바뀌더라도 쉽게 다음을 이어나갈수 있게 짜는게 능력입니다.
    
    // 인벤토리라는것은 아이템이 모여있는 녀석이기 때문에.
    // Item Inven[10];

    // 애초에 동적할당으로 이걸 짭니다.

    // Item AllInvenValue[0];

    // int Value0;
    // int Value1;
    // 부족한 기능들이 있나요?

    // 잃어버린메모리가 됩니다.
    /*int* Ptr =*/ // new int();

    int* Test = new int();
    Test = new int();

    // 자료구조란 많은양의 데이터를 배치하는 방법입니다.
    // 프로그래밍에 국한된 설명이 아니고.
    // 주차장에서 어떻게 하면 차를 많이 주차시킬수 있을거냐. => 자료구조를 고민하는 겁니다.

    // 추상적인 개념인 자료구조를 코드로 쓸수있게 만들어야 하는데.
    // 이런식으로 내가 클래스로 만들게 되면
    // 기존의 배열의 한계를 극복할수가 있고.
    // 이용이 훨씬 편해집니다.
    // 이런식으로 기본적으로 이용할수 있는 분야중
    // 데이터를 구조화 시키는 클래스들을 자료구조 클래스라고 합니다.

    // 사물을 [][][][][][][][][][][][][][]
    int IntArray[8];

    GameArray ItemGameArray = GameArray(INVENCOUNT);

    for (int i = 0; i < ItemGameArray.GetSize(); i++)
    {
        //              01234
        char Arr[10] = "Item";
        Arr[4] = '0' + i;
        ItemGameArray[i].SetName(Arr);
    }

    // ItemGameArray.ReSize(20);

    for (int i = 0; i < ItemGameArray.GetSize(); i++)
    {
        ItemGameArray[i].Render();
    }

    // 디폴트 복사 생성자
    // 잃어버린 포인터가 아니고
    // 댕글링 포인터를 발생시킵니다.
    GameArray ItemGameArray0 = GameArray(ItemGameArray);
    GameArray ItemGameArray2 = GameArray(5);
    ItemGameArray2 = ItemGameArray0;

    for (int i = 0; i < ItemGameArray2.GetSize(); i++)
    {
        // dlal 
        ItemGameArray2[i].Render();
    }


    // 디폴트 대입 연산자
    // ItemGameArray0 = ItemGameArray;

    // 정적바인딩입니까? 동적바인딩 입니까?
    // 정적바인딩 인겁니다.
    // 정적 바인딩을 중간에 크기를 바꿀수가 없다.
    // int Arr0[5];

    // Arr0 = int[3];

    // Arr0[10]


    //Item* AllInven = new Item[INVENCOUNT];
    //for (int i = 0; i < INVENCOUNT; i++)
    //{
    //    //              01234
    //    char Arr[10] = "Item";
    //    Arr[4] = '0' + i;
    //    AllInven[i].SetName(Arr);
    //}

    //for (int i = 0; i < INVENCOUNT; i++)
    //{
    //    AllInven[i].Render();
    //}

    int Arr0[10];
    int Arr1[10];
    // Arr1 = Arr0;
    
    // 나는 되게하고 싶고 좀더 편하게 기능을 이용하고 싶은데.
     
    //for (int i = 0; i < 10; i++)
    //{
    //    Arr0[i] = i;
    //}

    //for (int i = 0; i < 10; i++)
    //{
    //    Arr1[i] = 0;
    //}

    // 둘의 자료형은 완전히 동일하지만 대입이 되지 않는다.
    // 배열도 기본자료형의 기본 문법 허용하지 않은 겁니다.
    // 어 될거 같은데? 이유는 분명히 있지만 안되는 겁니다.
    // 언어적 차원에서 지원해주지 않겠다.
    // Arr1 = Arr0;
    // 하지만 이걸 처리할수 있게 우리가 만들수가 있습니다.


}
