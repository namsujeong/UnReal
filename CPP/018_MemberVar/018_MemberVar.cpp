// 018_MemberVar.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 클래스는 기본적으로
// 자신 내부의 행동과 특성을 외부에 공개하지 않고 내부에서만 공개하면
// 필요에따라서 프로그래머가 선택적으로 제어할수 있게 만들어 놨다.
// 접근제한 지정자라고 합니다.

// 내부 외부
// 클래스의 내부? 외부?
// class {  내부  }  외부

class Player 
{
// private: // 외부에 공개하지 않겠다.
            // 프라이버시 <개인적인 

// public: // 공용적인
// c++ 코딩에 문법은 그냥 쓰고 싶은대로 쓰면 됩니다.
// 개인의 성향을 문법이라고 착각하는 경우가 있습니다.

// 특성은 private:으로 막습니다.
private: // 프로그래머의 성향이 이렇습니다.
    int Hp;
    int Att;

// 행동은 public:으로 합니다.
public:
    void Damage(int _Att) 
    {
        // Hp => 플레이어 자신의 hp
        // Att => 플레이어 자신의 Att
        Hp -= _Att;
    }

};

void Damage(int* Hp, int Att)
{
    *Hp -= Att;
}

int main()
{
    // 이걸 객체화 오브젝트화
    Player NewPlayer;

    // public 설정을 한 녀석만.
    // NewPlayer.

}
