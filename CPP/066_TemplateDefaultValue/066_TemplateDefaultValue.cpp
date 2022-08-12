﻿// 066_TemplateDefaultValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// int Value 특정 자료형에 대한 상수(const)형 값을 받을수 있는데
// 템플릿 디폴트 인자라고 부른다.
// 디폴트 값까지 넣어주면 
template<typename ArrayType, int Value /*= 10*/>
class MyArray 
{
    ArrayType Arr[Value];
};

template<typename ArrayType = int>
class MyArray2
{
    ArrayType Arr[10];
};

int main()
{
    // 템플릿이라는것 자체는 명시해줘야 합니다.
    MyArray2<> ArrTest;

    int Value = 20;

    MyArray<int, 20> Array;

    // int ArrSize = 20;

    // 변수는 사용할수 없으므로 클래스에도 같은 규칙이 적용됩니다.
    // int Arr[ArrSize];

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
