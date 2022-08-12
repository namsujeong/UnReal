// 043_thisEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player 
{
public:
    int Hp;

public:
    void Damage(/*Player* const this,*/ int _Damage) 
    {
        printf_s("플레이어가 %d의 데미지를 받았습니다", _Damage);
        // this를 쓴적이 있나요 없나요?
        // nullptr이라는 this가 nullptr this가 관련이 안되어 있다면
        // 이건 될수있는 코드인 겁니다.
        // this->Hp = 200;
    }

};

int main()
{
    {
        //포인터는 오로지 가리킬 뿐입ㅁ니다.

        //int* Ptr = nullptr;
        //*Ptr = 1000;


        //int a = 0;
    }

    {
        Player NewPlayer;
        // Player* NewPlayerPtr = &NewPlayer;
        Player* NewPlayerPtr = nullptr;
        NewPlayerPtr->Damage(/*NewPlayerPtr, */100);

        // 사람들이 많이하는 착각.

    }


    std::cout << "Hello World!\n";
}
