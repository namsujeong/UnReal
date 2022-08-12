// stdstring.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <string>

class MyString 
{
// public:
    // std::vector<char> Arr;
    // operator+()
};

// 이런 자료구조를 사용할때 굉장히 주의해야할게 있습니다.

int main()
{
    // 이런 벡터와 비슷한 자료구조가 있고
    // 특수하게 특화된 자료구조가 있는데.
    // 배열기반 시퀸스 컨테이너 이며
    // 유저의 편의에 의해서
    // string
    // 문자 여러개 담기위해서 => 문자가 여러개면 => 문자열
    // 문자열을 담기위한 전용 클래스가 있습니다.
    // std::vector<char> String;

    std::string Header = "Big ";

    std::string Name = "Sword";

    if (Header == Name)
    {
        int a = 0;
    }

    std::string ItemName;

    // ItemName.resize(20);
    ItemName.reserve(20);
    ItemName = Header + Name;


    std::cout << ItemName << std::endl;

    //               0번인덱스부터 3번째까지 
    //          [B][i][g][ ][S][w][o][r][d][0]
    //          [F][i][r][e][ ][S][w][o][r][d][0]
    ItemName.replace(0, 3, "Fire");

    // 게임을 만들다보면
    // 주인공의 이름을 바꾸거나
    // 아이템의 이름을 추가하거나
    // 아이템에 접두사 접미사
    // 강력한 철검
    // 날카로운 철검
    // 어떠한 텍스트가 변화하는 경우가 많고
    
}
