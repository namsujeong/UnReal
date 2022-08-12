// 029_Sizeof.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 바이트 패딩이라고 합니다

class Player 
{
public:
    //bool Test0; // 4
    //bool Test1; // 
    ///*보이지 않는 1바이트*/ 
    ///*보이지 않는 1바이트*/
    //int Hp;     // 4
    //int Att;    // 4
    //bool Test3; // 4
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/

    bool Test0;    // 
    bool Test1;    // 
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    int Hp;        // 8
    int Att;       // 8
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    __int64 Test3; // 8
    bool bTest3;    // 8
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/
    /*보이지 않는 1바이트*/


public:
    void Function() 
    {

    }
};

int main()
{
    int intValue;
    bool boolValue;
    int* intPtrValue;

    //int IntSize = sizeof(int);
    //int boolSize = sizeof(bool);
    //int IntPtrSize = sizeof(int*);

    // 코드가 실행될때 결정되기 때문에 상수로 쓸수 있습니다.

    int IntSize = sizeof(intValue);
    int boolSize = sizeof(boolValue);
    int IntPtrSize = sizeof(intPtrValue);

    //  클래스의 사이즈는
    //    1. 맴버변수의 크기로 결정된다.
    //    2. 맴버함수는 크기에 영향을 미치지 않는다.
    //    3. 바이트패딩 규칙을 따르게 되는데.
    // 
    //       3-1. 클래스 내부에서 가장 큰 기본자료형을 찾는다. (8 바이트가 대부분일것이다.)
    int PlayerSize = sizeof(Player);


}

