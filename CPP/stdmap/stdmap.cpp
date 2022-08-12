// stdmap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

class Monster 
{
public:
    int Att;
    int Def;
};

class MapNode 
{
public:
    MapNode* Parent;
    MapNode* LeftChild;
    MapNode* RightChild;
};

int main()
{
    // 맵은 키와 값으로 이루어져있는 자료구조로서
    // 레드블랙이진트리를 사용해서 구성되어있습니다.
    // 레드블랙이진트리는 자가균형탐색이진트리로.

    // 탐색트리
    // map은 기본적으로 탐색에 특화된 자료구조인데.
    // 이진 써치트리
    // 탐색트리 만으로는 안된다.
    // 편향트리가 생길수가 있기 때문입니다.
    // 0
    //    1
    //       2
    //          3
    //              4
    //                  5
    //                      6

    // 자가균형
    // 자가균형까지 해주는것이 map의 핵심입니다.

    // std::map<std::string, Monster> MonsterDatas;
    // map은 오름차순으로 정렬해주지만 그게 중요한게 아닙니다.

    // map은
    // 트리야
    // 트리인데 탐색을 위한 규칙이 있는 트리다.
    // 그상태에서 편행도 해결해주는 자가균형 트리야
    
    // 자가균형 탐색 이진트리가
    // 자가균형을 유지하기 위한 방법들이 좀 많은데.
    // 그중 레드블랙 이진트리라는 방식을 사용한 자가균형 트리이다.

    // 노드형 연관 컨테이너
    std::map<int, int> Datas;

    Datas.insert(std::pair<int, int>(10, 10));
    Datas.insert(std::pair<int, int>(2, 999));
    Datas.insert(std::pair<int, int>(15, 10));

    // 10 2 15

    // 맵은  key를 바꿀수가 없기 때문에 const로 사용해야만 한다.
    for (const std::pair<int, int>& Pair : Datas)
    {
        // Pair.first 는 key
        // Pair.second 는 value
        std::cout << Pair.first << std::endl;
        
    }

    std::map<int, int>::iterator FindIter = Datas.find(2);

    // FindIter == Datas.end() 못찾았다
    // FindIter != Datas.end() 찾았다
    if (FindIter != Datas.end())
    {
        std::cout << FindIter->second << std::endl;
    }



    

}





