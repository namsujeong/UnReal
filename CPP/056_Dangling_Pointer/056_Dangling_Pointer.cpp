// 056_Dangling_Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//            100번지
void MyDelete(int* Ptr) 
{
    delete Ptr;
    Ptr = nullptr;
}

void Test(int Ptr)
{
    Ptr = 50;
}

int main()
{
    // 100번지
    int* Ptr = new int(2000);

    int Value = 100;
    Test(Value);

    // 100번지를 가리키는 그 주소값
    // 사용하지 않는 포인터의 주소값은 0번지로 고정시키는게 프로그래머들 간의 예의 입니다.
    if (nullptr == Ptr)
    {
        delete Ptr;
        Ptr = nullptr; // 0번지를 가리키게 해서 더이상 사용하지 않는다는걸 명시해야 되는겁니다.
    }

    if (nullptr == Ptr)
    {
        delete Ptr;
        Ptr = nullptr;
    }

    //MyDelete(Ptr);
    //MyDelete(Ptr);

    // 위치
    // 형태
    // 크기 
    // 값


    //if (nullptr == Ptr)
    //{
    //    delete Ptr;
    //    Ptr = nullptr;
    //}

    //// 안전한 지우기
    //// Safe_release
    //// safe_delete
    //if (nullptr == Ptr)
    //{
    //    delete Ptr;
    //}
}
