// stdlist.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <list>

// vector는 배열형 시퀸스컨테이너
// list는 노드형 시퀸스컨테이너

// 노드형태
//class Zone 
//{
//    // Zone* Link;
//    // std::vector<Zone*> Links;
//};

// 단방향
class Stage
{
    Stage* Next;
};

// typedef int DataType;
using DataType = int;

class GameList 
{
private:
	// 양방향 노드를 가진 자료구조 입니다.
	// 이녀석은 외부에서 접근이 불가하다.
	class GameListNode
	{
	public:
		int Value;
		GameListNode* Next;
		GameListNode* Prev;

	public:
		GameListNode() 
			: Next(nullptr)
			, Prev(nullptr)
		{

		}
	};

public:
	class iterator
	{
	private:
		GameListNode* Node;

	public:
		bool operator!=(const iterator& _Other) 
		{
			return _Other.Node != Node;
		}

		iterator& operator++()
		{
			Node = Node->Next;
			return *this;
		}

		int& operator*()
		{
			return Node->Value;
		}

	public:
		iterator()
			: Node()
		{

		}

		iterator(GameListNode* _Node)
			: Node(_Node)
		{

		}
	};

	// 이렇게 2개의 노드를 두고
	GameListNode* StartNode;
	GameListNode* EndNode;

public:
	iterator begin() 
	{
		return iterator(StartNode->Next);
	}

	iterator end()
	{
		return iterator(EndNode);
	}

	void push_back(const DataType& _Value)
	{
		// 공간적 최적화는
		// 메모리를 저장하지 않다고
		// 그때 연산해서 값을 만들고 메모리를 파괴하는겁니다.

		// 연산적 최적화
		// 메모리를 사용해서 계산결과를 미리 메모리에 저장해 놓고
		// 나중에 연산해야 할때 그 값을 사용하는겁니다.

		// 둘을 양립하는건 거의 불가능에 가깝다.

		// 이런짓을 해야하고 연산을 더 해야하는데.
		//if (nullptr == End)
		//{
		//}

		GameListNode* NewNode = new GameListNode();

		NewNode->Value = _Value;

		GameListNode* EndPrev = EndNode->Prev;
		NewNode->Prev = EndPrev;
		NewNode->Next = EndNode;

		EndPrev->Next = NewNode;
		EndNode->Prev = NewNode;
	}

	GameList() 
		: StartNode(nullptr), EndNode(nullptr)
	{
		// 뭔가 값을 가지려는게 아닙니다.
		// 앞과 뒤를 책임져주려고 하는겁니다.
		StartNode = new GameListNode();
		EndNode = new GameListNode();
		StartNode->Next = EndNode;
		EndNode->Prev = StartNode;
		// 이걸 더미 노드 방식이라고 합니다.
	}


};


int main()
{
	// 기본적으로 메모리의 유동성이 작다면 벡터가 가장 좋은 선택이라고 볼 수 있습니다.
	// 그냥 무조건 벡터가 빠르다.

	// 벡터에 100만개 push_back
	// 리스트에 100만개 push_back

	// 리스트는 삭제가 빈번하게 일어나면 사용하게 된다.

    std::list<int> NewList;

	std::vector<int> NewVector;

	// NewVector.push_front

	// 노드형 무슨 컨테이너

	{
		// 0 1 2 3 4 5 6 7 8 9
		for (size_t i = 0; i < 10; ++i)
		{
			NewList.push_front(i);
		}
	}

	{
		std::list<int>::iterator Start = NewList.begin();
		std::list<int>::iterator End = NewList.end();

		for (; Start != End; ++Start)
		{
			std::cout << *Start << std::endl;
		}
	}

	//{
	//	// ranged for라고 하는데.
	//	// 중간에 삭제하면 큰일납니다.
	//	for (int& Value : NewList)
	//	{
	//		std::cout << Value << std::endl;
	//	}
	//}

	return;

	GameList NewGameList;
	// 노드형 무슨 컨테이너

	{
		// GameList::

		// 0 1 2 3 4 5 6 7 8 9
		for (size_t i = 0; i < 10; ++i)
		{
			NewGameList.push_back(i);
		}
	}

	{
		GameList::iterator Start = NewGameList.begin();
		GameList::iterator End = NewGameList.end();

		for (; Start != End; ++Start)
		{
			std::cout << *Start << std::endl;
		}
	}

	//{
	//	// ranged for라고 하는데.
	//	// 중간에 삭제하면 큰일납니다.
	//	for (int& Value : NewList)
	//	{
	//		std::cout << Value << std::endl;
	//	}
	//}


}
