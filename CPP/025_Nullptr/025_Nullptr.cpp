// 025_Nullptr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class InventoryIcon 
{

};

int main()
{
    int Value = 100;

    // int* Ptr = &Value;

    // 나는 아무것도 가리키지 않겠다
    // 나는 지금 비어있는 포인터 비어있는 주소값이다
    // 나를 쓸수 없다.
    // 컴파일 적으로 허용하고 있을뿐.
    int* Ptr = 0;

    // c++에 좀더 맞는 정석적인 문법입니다.
    int* PtrNullptr = nullptr;

    InventoryIcon Icon1;
    InventoryIcon Icon2;
    InventoryIcon Icon3;
    InventoryIcon Icon4;
    InventoryIcon Icon5;

    InventoryIcon* Icon1Ptr = &Icon1;
    InventoryIcon* Icon2Ptr = &Icon2;
    InventoryIcon* Icon3Ptr = nullptr;
    InventoryIcon* Icon4Ptr = nullptr;
    InventoryIcon* Icon5Ptr = nullptr;

    if (nullptr == Icon3Ptr)
    {
        // printf_s("그리지 않는다");
    }

}
