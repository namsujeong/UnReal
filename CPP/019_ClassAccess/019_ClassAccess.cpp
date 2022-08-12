// 019_ClassAccess.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Test 
{
// 외부의 공개를 하지 않는 이유는 이녀석이 public이면 
// 전역변수를 잘못사용했을때의 문제와 동일한 문제가 발생하기 때문입니다.
private:
    int Hp;

public:
    int GetHp()
    {
        return Hp;
    }

    // 디버깅이 편해집니다.
    // HP를 수정한다는 행동으로 제어하게 되면
    void SetHp(int _Value)
    {
        Hp = _Value;

        if (Hp <= 0)
        {
            int a = 0;
        }
    }
};

Test TestClass;
int TestHp = 20;

int main()
{
    TestHp = 100;
    TestClass.SetHp(100);

    // 앞으로 수없이 많은 코드를 치게 되겠죠?
    // 100만줄의 코드
    // ............

    TestHp = 0;

    // ....

    TestHp = 111;
    TestClass.SetHp(50);
    TestHp = 54;

    TestHp = 32;

    // ....

    TestClass.SetHp(20);
    TestHp = 12;

    TestHp = 0;

    // TestClass.Att = 200;
    TestHp = 0;
    TestClass.SetHp(0);


    std::cout << "Hello World!\n";
}
