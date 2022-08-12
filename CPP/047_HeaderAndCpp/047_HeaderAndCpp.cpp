// 047_HeaderAndCpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 이중 선언만 분리해서 따로 놓을수가 있습니다.
// 이걸 선언과 구현의 분리하고 합니다.

// 구현만 떼어 놓는 의미는 다음과 같다.
// 이러이러한 함수가 있을 거야....
//void TestFunction0();
//
//// 선언이라는건 중복되도 문제가 안됩니다.
//void TestFunction1();
//void TestFunction1();
//void TestFunction1();
//void TestFunction1();
//void TestFunction1();
//void TestFunction1();
//void TestFunction1();

// 선언은 선언 파일에 모아 놓고
// .h
// 구현은 구현 파일에 모아 놓습니다.
// .cpp

// c++의 정식 선언 파일은 .hpp
// c++의 정식 구현 파일은 .cpp 입니다

// 이쪽에서 사용할때는 선언만 넣어서 사용하게 되고
//#pragma once // 중복된 파일을 제거하고 하나만 남기는 역할을 해준다.
//void TestFunction0();
//void TestFunction1();

#include "MyFunction.h"

int main()
{
	int a = 0;
}

// 그냥 자동으로 main의 아래쪽에는 Myfunction.cpp
// #include "MyFunction.cpp"

//
//void TestFunction0()
//{
//	TestFunction1();
//	printf_s("함수입니다");
//}
//
//// 함수 선언 (function Header)
//void TestFunction1()
//// 함수 체 (function body)
//{
//	printf_s("함수입니다");
//}
