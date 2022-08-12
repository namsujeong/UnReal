// Node.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "../DynamicArray/GameArray.h"

// "C:g\\h\\e"

// h폴더는 e폴더의 ..

// zone의 메모리가 1개 생겼다 => 마을이 하나 생겼다.

// 내가 만든 
class Zone 
{
    // 지금까지 우리가 동적으로 뭔가를 받을수 있는 녀석은 
    // 수없이 많은 자식들을 만들겠지만
    // 그것들을 부모형태로 관리한다.
    // Zone* 업캐스팅 되었다고 볼수가 있습니다. 
    // 업캐스팅된 부모형으로 관리하는 방식은
    
    // 다형성의 꽃.
    // 내가 아무리 많은 사막이건 도시건 마을이건
    // Zone*이라고 하는 부모형태로 관리할수 있다. => 다형성

    // 내가 아무리 많은 드래곤이건 오크건 코볼트
    // Monster*이라고 하는 부모형태로 관리할수 있다. => 다형성

    // 내가 아무리 많은 마법사 전사 궁수
    // Player*이라고 하는 부모형태로 관리할수 있다. => 다형성

    // 참조형으로 관리해야한다는 겁니다.
    // 참조형으로 관리하지 않으면
    // Desert NewDesert; // 사막지형이 2개가 됐다는 겁니다.
    // Zone NewDesert;

    // 몇개가 연결될지 알수가 없습니다.
    // 이러한 메모리 형태를 노드 방식이라고 합니다.
    GameArray<Zone*> LinkArray;

public:
    // 참조만 받아서 사용한다는 개념입니다.
    // 다형성을 이용하는 방법
    // 업캐스팅 => 자식은 언제든지 부모의 자료형이 될수 있어요.
    //            대부분 참조형으로 이용합니다.
    void Link(Zone* _LinkZone) 
    {
        // 이코드가 어떤 코드인지는 내일 설명하도록 합시다.
        LinkArray.ReSize(LinkArray.GetSize() + 1);
        LinkArray[LinkArray.GetSize() - 1] = _LinkZone;
    }

    //  부모의 함수를 최대한 사용하고 자기 자신의 함수는
    // 사용하지 않는게 없습니다.
    virtual void Render() 
    {
    }

    void LinkRender()
    {
        for (size_t i = 0; i < LinkArray.GetSize(); i++)
        {
            LinkArray[i]->Render();
        }
    }
};

class City : public Zone
{
public:
    void CityFunction() 
    {

    }

    // 자기 내부에서만 사용하면 된다.
    virtual void Render()
    {
        std::cout << "도시입니다" << std::endl;

        // 부모의 함수에서만 사용하는 겁니다.
        CityFunction();
    }
};

class Forest : public Zone
{
public:
    virtual void Render()
    {
        std::cout << "숲입니다" << std::endl;
    }
};

class Desert : public Zone
{
public:
    virtual void Render()
    {
        std::cout << "사막입니다" << std::endl;
    }
};

class Snowfield : public Zone
{
public:
    virtual void Render()
    {
        std::cout << "설원입니다" << std::endl;
    }
};

//         [설원]
//           ▲   
//           ▼ 
// [숲]◀▶[도시]◀▶[사막]
// 
// 도시는 왕래할수 있는 곳이? 3

int main()
{
    int* Ptr = nullptr;

    // 내가 int를 유지보수하는 것과 다름없죠.
    // int NewInt = Ptr;

    // 1. 콘솔창부터 너희들이 만들어야해.
    // 2. 콘솔창에 글자를 띄우는것도 너희가 만들어야해.

    Zone* NewCity = new City();
    // Zone* NewSnowfield0 = new Snowfield();
    // Zone* NewSnowfield1 = new Snowfield();

    // 동적할당(동적 바인딩)의 장점은
    // 다채롭게 변화는 게임프로그래밍에서
    // 코드를 최대한 변경하지 않거나
    // 변경하더라도 내가 코드를 많이 바꿀필요가 없어진다는 장점이 있다는 겁니다.
    Zone* NewDesert = new Desert();
    Zone* NewSnowfield = new Snowfield();
    Zone* NewForest = new Forest();

    // 다형성
    // 절대 특별한 함수를 사용하지 말고
    // 다형성을 이용해서 관리하고
    // 특수한 함수는 
    //Fireball* Fireball = new Fireball();
    //Skill* ;

    // 메모리는 1곳에 두고
    // 다른 지역들은 그 지역의 참조만 받아서 연결하는 형태가 되어야 합니다.

    // ????

    // 특정 자료형이 자기자신과 동일한 자료형을 참조형으로 들고 있으면
    // 이걸노드 구조라고 합니다.

    // 도시는 데이터의 참조형만 가지고 있으면 됩니다.


    NewCity->Link(NewDesert);
    NewCity->Link(NewSnowfield);
    NewCity->Link(NewForest);

    NewCity->LinkRender();

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
