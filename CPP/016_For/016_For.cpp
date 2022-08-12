// 016_For.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int Init() 
{
	printf_s("초기화문\n");
	return 0;
}

int If() // 조건문
{
	printf_s("조건문\n");
	return 10;
}

int Plus() // 조건문
{
	printf_s("증감문\n");
	return 1;
}

int main()
{
	// size_t 지금 알려드릴수 없습니다.

	int Value0 = 20;
	int Value1 = 20;
	int Value2 = 20;
	int Value3 = 20;
	int Value4 = 20;
	int Value5 = 20;

	// 초기화문
	// 조건문
	// 실행코드
	// 증감문
	// 조건문
	// 실행코드
	// 증감문
	// 조건문
	// 실행코드
	// 증감문

	for (
		int i = Init(); // 초기화문
		i < If();  // 조건문
		i += Plus() // 증감문
		)
	{
		// 실행코드
		printf_s("실행코드\n");
	}


}
