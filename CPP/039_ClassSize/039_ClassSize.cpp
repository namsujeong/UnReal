// 039_ClassSize.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// virtual을 하게 되면 왜? 8바이트로 크기가 커지게 되지?
class Test 
{
public:
	virtual void Function() 
	{
	}
};

int main()
{
	// 이녀석이 1바이트인것은 virtual에 대한 설명과는 무관합니다.
	int TestSize = sizeof(Test);

	// 아무것도 없는 녀석의 크기가 1바이트인 이유는
	// 아무런 맴버변수도 없기 때문에 0바이트여야 된다고 쳐보겠습니다.
	// 현실세계에 부피와 무게가 없는 물체가 존재할수 있나요?

	Test NewTest;

	Test* Ptr = &NewTest;
	// 포인터는 n번지 + sizeof(자료형) * 정수
	// 포인터는 n번지 + 0 * 정수
	Ptr + 10;


	Test Arr[10];
}
