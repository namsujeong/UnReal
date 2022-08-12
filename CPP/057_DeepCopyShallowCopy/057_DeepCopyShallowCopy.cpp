// 057_DeepCopyShallowCopy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyNumber 
{
public:
    int* Number;

public:
    MyNumber() 
        : Number(new int(0)) 
    {
        
    }

    MyNumber(const MyNumber& _Other)
        // : Number(_Other.Number)
    {
        // 자신만의 메모리를 만들어주는것을 깊은 복사라고 합니다.
        Number = new int(*_Other.Number);


        // 저녀석이 원본인지 뭔지를 알수가 없기 때문에
        // 나는 지울필요가 없다는것을 어떻게 알까요?
        // 이유는 뭐에요?
        // 얕은 복사를 했으니까.
        // Number = _Other.Number;
    }


    ~MyNumber()
    {
        if (nullptr != Number)
        {
            delete Number;
            Number = nullptr;
        }
    }

};

int main()
{
    // 깊은 복사만 하면 되는게 아닌가요?
    // 정답.
    // 대부분의 상황에서는 깊은 복사가 유리할때가 많습니다.
    
    // 얕은 복사는 하면 안됨 => 그런게 아니다. 그런 단순한게 아닙니다.
    // 상황에 따라서 얕은 복사와 깊은 복사를 선택적으로 사용할 수 있어야 합니다.

    // 얕은 복사 = > 메모리는 1개인데 그걸 나눠쓰는것
    //              삭제할때 주의해야 한다.
    // 깊은 복사 = > 메모리는 새롭게 만드는것
    //              주의할게 없다.

    {
        // 둘은 하나의 메모리를 가리키는 세트죠?
        int* Ptr0 = new int();
        int* Ptr1 = Ptr0;
        // 이걸 얕은 복사라고 합니다.
        // 이것도 굉장한 문제가 생길수 있습니다.

        if (nullptr != Ptr0)
        {
            // 내가 나눈 참조들을 다 정리해주면 되는거 아닌가요?
            // 꽤 어려울 분더러.
            // 굳이 이런 해결책만 있는건 아니다.
            Ptr1 = nullptr;
            delete Ptr0;
            Ptr0 = nullptr;
        }

        if (nullptr != Ptr1)
        {
            delete Ptr1;
        }
    }

    {
        // 둘은 하나의 메모리를 가리키는 세트죠?
        MyNumber Ptr0 = MyNumber();
        MyNumber Ptr1 = Ptr0;
        // 이걸 얕은 복사라고 합니다.
        // 이것도 굉장한 문제가 생길수 있습니다.

        //if (nullptr != Ptr0)
        //{
        //    // 내가 나눈 참조들을 다 정리해주면 되는거 아닌가요?
        //    // 꽤 어려울 분더러.
        //    // 굳이 이런 해결책만 있는건 아니다.
        //    Ptr1 = nullptr;
        //    delete Ptr0;
        //    Ptr0 = nullptr;
        //}

        //if (nullptr != Ptr1)
        //{
        //    delete Ptr1;
        //}
    }

    std::cout << "Hello World!\n";
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
