// 009_Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Test() 
{
    int Value = 0;
    int* Ptr = &Value;
    __int64 Ptr = reinterpret_cast<__int64>(Ptr);
}

int main()
{
    // 32비트 빌드는 안하게됬다.
    // 4,294,967,296
    // 64비트로 빌드를 하고
    int Value = 0;
    int* Ptr = &Value;
    __int64 Ptr = reinterpret_cast<__int64>(Ptr);
    
    Test();
    // 이걸 좀 쉽게 알기 위해서는

    // 주소값을 타나내기 위한 자료형인
    // 포인터는
    // 기본적으로 모든 자료형에 대비됩니다.
    // int* 형이 int의 주소값

    // bool
    // bool*
}
