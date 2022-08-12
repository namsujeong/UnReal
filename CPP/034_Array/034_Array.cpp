// 034_Array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 배열은 특정한 자료형을 n개 만들어내는 문법이다.

class Test 
{
public:
	Test()
	{
	}

	Test(int Value) 
	{
	}
};

int main()
{
	{
		// 이런 멍청한 짓을 하지 않아도 됩니다.
		int Int0 = 0;
		int Int1 = 0;
		int Int2 = 0;
		int Int3 = 0;
		int Int4 = 0;
		int Int5 = 0;
		int Int6 = 0;
		int Int7 = 0;
		int Int8 = 0;
		int Int9 = 0;


		// 이렇게 해서 만들어진 배열은 약간 특별한 초기화 방법을 사용하는데
		int ARR[10];
		// 리스트 이니셜라이저 문법을 사용해서 초기화 할수가 있다.
		// 만약 여러분들이 리스트 이니셜라이저 문법을 쓰면 
		// 이는 입력하지 않은 모든 인자를 0으로 초기화하겠다는 말과 같다.

		for (int i = 0; i < 10; i++)
		{
			ARR[i] = i;
		}
		// 이런식으로 포인터 문법처럼 사용할수가 있습니다.
		// 배열은 기본적으로 제로베이스입니다.
		// 10 있다고 하면
		// 12345678910 x
		// 0123456789 O

		// 배열의 이름이 포인터로 들어가기 때문에
		// 배열 == 포인터
		// 완전히 잘못된 생각이고
		// 암시적 형변환이 될뿐입니다.
		int* Ptr = ARR;

		int PtrSize = sizeof(Ptr);
		int ArrSize = sizeof(ARR);

		// 배열의 형은 다음과 같이 표현됩니다.
		// int[] 형과
		// int* 형은 다르죠?
		// 해석되는것이 차이가 있습니다.

		int a = 0;
	}

	{
		// 이런 멍청한 짓을 하지 않아도 됩니다.
		Test Int0 = 0;
		Test Int1 = 0;
		Test Int2 = 0;
		Test Int3 = 0;
		Test Int4 = 0;
		Test Int5 = 0;
		Test Int6 = 0;
		Test Int7 = 0;
		Test Int8 = 0;
		Test Int9 = 0;


		// 이렇게 해서 만들어진 배열은 약간 특별한 초기화 방법을 사용하는데
		Test ARR[10];
		// 리스트 이니셜라이저 문법을 사용해서 초기화 할수가 있다.
		// 만약 여러분들이 리스트 이니셜라이저 문법을 쓰면 
		// 이는 입력하지 않은 모든 인자를 0으로 초기화하겠다는 말과 같다.
	}


}
