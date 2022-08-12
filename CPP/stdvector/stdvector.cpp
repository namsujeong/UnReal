// stdvector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include "../DynamicArray/GameArray.h"
#include "../DebugBase/DebugHeader.h"

// vector의 핵심
// 1. vector는 배열대신 사용할때가 많다.
// 2. vector는 데이터와 메모리를 분리한 개념으로 사용한다.
// 3. vector에서 대부분 기존의 메모리의 크기를 작게 만드는것은 비효율적이기 때문에 대부분의 상황에서.
//    한번 할당된 capacity는 변하지 않는다.
// 4. 한번 내부에서 배열이 할당되고 나면 내가 사이즈를 변경하는 함수나 지우는 함수 등등이 있다고 하더라도
//    capacity가 늘어나는 일은 발생할 수 있어도 크기가 줄어드는 일은 발생할 수 없어요.!!!!!!
// 5. 벡터는 시작할때 초기화를 해주는 정적배열처럼 사용하는게 기본입니다.
//    코드에 따라서 크기가 바뀌어야하는 

// * 벡터는 배열형 시퀸스 컨테이너

// int Arr[10]

//template<int Value = 20>
//void Test10()
//{
//	int ArrValue[10];
//}

template<int Value>
void Test()
{
	int ArrValue[Value];
}

//void Test20()
//{
//	int ArrValue[20];
//}

void Test(int _Value) 
{
	// 
	std::vector<int> Test = std::vector<int>(_Value);

	// int Arr[Test];
}

//               메모리의 삽입 삭제를 말합니다.
// c++에서 벡터는 삽입삭제가 느리고 => 하면 안되요. 함수도 제대로 지원이 안됩니다.
// 삽입삭제를 할거면 벡터를 사용하지 않는거에요.

// std라고 하는 녀석들은 
// c++ std => 스탠다드의 약자로
//     c++ 스탠다드로 지원해준다는 겁니다.
// 언어 기본입니다.

// 직접 내부에서 최소한의 동작을 실행해봅시다.

template<typename DataType>
class MyVector 
{
private:
	size_t DataSize;
	GameArray<DataType> Arr; // 메모리의 크기

public:
	size_t size() 
	{
		return DataSize;
	}

	size_t capacity() 
	{
		return Arr.GetSize();
	}

	void resize(size_t _Size)
	{
		reserve(_Size);
		DataSize = _Size;
	}

	void reserve(size_t _Size)
	{
		if (Arr.GetSize() >= _Size)
		{
			return;
		}

		Arr.ReSize(_Size);
	}

	DataType& operator[](size_t _Index) 
	{
		// 터트리는 함수를 사용한 겁니다.
		// assort라고 합니다.
		if (DataSize <= _Index)
		{
			MsgBoxAssert("인덱스 범위를 초과했습니다");
		}

		return Arr[_Index];
	}

	void push_back(const DataType& _Data)
	{
		if (Arr.GetSize() <= DataSize)
		{
			// 1.5배를 한 특별한 이유가 있을 수도 있지만
			Arr.ReSize(Arr.GetSize() * 2 + 1);
		}

		Arr[DataSize] = _Data;

		DataSize += 1;
		return;
	}
};

int main()
{
	// 템플릿은 이런식으로도 쓸수 있는데.
	// Test<10>();

	// std::자료구조들의 기본은
	// 메모리와 데이터를 분리합니다.
	// 메모리 == 데이터녀석이 있고. 맵, 리스트 메모리 형태가 노드
	// 메모리 != 데이터녀석이 있고. 벡터, 해시테이블 메모리 형태가 배열

	// 먼저 결정되어야 하는것은?
	// 메모리인가요 데이터 인가요?
	// 메모리를 결정하고
	// 데이터를 집어 넣는 겁니다.


	// 배열은 기본적으로 크기를 정하죠?
	// 데이터를 집어넣는 형식이됩니다.

	// 벡터는 push_back이라는 함수를 통해서
	// => 한꺼번에 처리합니다.
	// 메모리도 확장하고

	{
		int Value /*= 20*/;
		Value = 20;

		// 메모리 40 바이트죠?
		int* Ptr = new int[10];

		// 데이터 1개 들어가있다고 볼수 있습니다.
		Ptr[0] = 10;

		// 내가 의미있는 데이터를 메모리안에 적재했다고 할수가 있습니다.
	}

	// 완전히 동적입니다.
	// 배열과 동일한 사용법
	{
		/*std::vector<int> IntArray = std::vector<int>(10);

		for (int i = 0; i < IntArray.size(); i++)
		{
			IntArray[i] = i;
		}

		for (int i = 0; i < IntArray.size(); i++)
		{
			std::cout << IntArray[i] << std::endl;
		}*/
	}

	{
		//int* Ptr = new int[1];
		//Ptr = new int[2];

		// 내부에서 배열을 확장시키면서
		std::vector<int> IntArray;

		//IntArray.resize(10);
		//std::cout << "Size : " << IntArray.size() << std::endl;
		//std::cout << "Capacity : " << IntArray.capacity() << std::endl;


		IntArray.reserve(10);
		std::cout << "Size : " << IntArray.size() << std::endl;
		std::cout << "Capacity : " << IntArray.capacity() << std::endl;

		// IntArray[10] = 20;

		// 클리어
		//IntArray.clear();
		//std::cout << "Size : " << IntArray.size() << std::endl;
		//std::cout << "Capacity : " << IntArray.capacity() << std::endl;

		//IntArray.reserve(5);
		//std::cout << "Size : " << IntArray.size() << std::endl;
		//std::cout << "Capacity : " << IntArray.capacity() << std::endl;

		// return 0;


		//std::cout << "std vector ------------------------------------------------------" << std::endl;

		//// 함수하나로 메모리를 확장하는 것과
		//// 의미있는 데이터를 집어넣는것을 한꺼번헤 하는겁니다.

		//// 메모리와 데이터를 분리합니다.
		//// 의미있는 데이터를 100 넣어줬다.
		//for (int i = 0; i < 10; i++)
		//{
		//	IntArray.push_back(i);
		//	std::cout << "Size : " << IntArray.size() << std::endl; 
		//	// size 내가 넣어준 의미있는데이터의 크기
		//	std::cout << "Capacity : " << IntArray.capacity() << std::endl; 
		//	// capacity 그 데이터를 받을수 있는 미리 할당된 메모리의 크기
		//	std::cout << "Value : " << IntArray[i] << std::endl;
		//}
		//IntArray.push_back(100);
		//IntArray.push_back(200);
		//IntArray.push_back(50);



		//for (int i = 0; i < IntArray.size(); i++)
		//{
		//	std::cout << IntArray[i] << std::endl;
		//}
	}

	{
		MyVector<int> IntArray;

		std::cout << "my vector ------------------------------------------------------" << std::endl;

		IntArray.reserve(10);

		// IntArray[0] = 20;

		IntArray.push_back(100);
		IntArray.push_back(200);
		IntArray.push_back(80);

		//for (int i = 0; i < 10; i++)
		//{
		//	// 이렇게 단순하게 사용하는 경우는 거의 없습니다.
		//	// 이런식으로 벡터를 사용하면 혼납니다.
		//	IntArray.push_back(i);
		//	std::cout << "Size : " << IntArray.size() << std::endl;
		//	std::cout << "Capacity : " << IntArray.capacity() << std::endl;
		//	std::cout << "Value : " << IntArray[i] << std::endl;
		//}

		// 100 200 80 => 시퀸스 컨테이너
		// 100 80 200 => 연관 컨테이너

		for (int i = 0; i < IntArray.size(); i++)
		{
			std::cout << "Value : " << IntArray[i] << std::endl;
		}

	}
}