// 053_Delete.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

bool InfiHp = false; // 무한 hp
bool QuestAllClear = false; // 퀘스트 그냥 클리어
bool Att999999 = false; // 퀘스트 그냥 클리어

// c에 bool이 없는 이유와 같아요.
// 과거의 사람들은 이런 옵션을 처리할때 애초에 
// 8바이트나 쓸 생각이 없었다.

// int면 bit가 32개야.
// 비트 하나하나마다 의미를 부여해서 옵션으로 처리할수가 있다.
// 00000000 00000000 00000000 0000 0 0 0 1
//                                 8 4 2 1

void SetGameCheatOption(bool _InfiHp, bool _QuestAllClear, bool _Att999999)
{

}

int main()
{
    // 가독성도 좋지 않고
    // 메모리도 많이 사용하게 됩니다.
    // 연산량도 늘고.
    // SetGameCheatOption(true, true, false);

    // 절대로 받아들여지지가 않습니다.
    // 경고도 받아들이지 않습니다.

    // 간간히 

    //#define _CRTDBG_ALLOC_MEM_DF        0x01  // Turn on debug allocation
    //#define _CRTDBG_DELAY_FREE_MEM_DF   0x02  // Don't actually free memory
    //#define _CRTDBG_CHECK_ALWAYS_DF     0x04  // Check heap every alloc/dealloc
    //#define _CRTDBG_RESERVED_DF         0x08  // Reserved - do not use

    int Bi = 0b00000000000000000000000000000000;

    // 16진수 표현법.
    // f는 15
    //           0b00000000000000000000000000001111;
    // int Hex = 0x   f   f   f   f   f   f   f   f;
    // 마찬가지로 비트로 표현되는 방법이지만

    // 이것도 수치를 넣어서
    // _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    _CrtSetDbgFlag(0x01 | 0x20);

    int LocalAtt999 = 0b00000000000000000000000000000001;
    int LocalInfiHp = 0b00000000000000000000000000000010;

    // 3이 됩니다.
    int ResultOption = LocalInfiHp | LocalAtt999;
    // ResultOption = 0b00000000000000000000000000000011
    // LocalInfiHp  = 0b00000000000000000000000000000010
    // 결과         = 0b00000000000000000000000000000010
    // 2가 나오게 됩니다.
    // 참이 나오게 됩니다.


    if (ResultOption & LocalInfiHp)
    {
        printf_s("Hp 무한 옵션이 켜졌습니다.");
    }

    if (ResultOption & LocalAtt999)
    {
        printf_s("Hp 공격력 최대치가 켜졌습니다.");
    }

    int* Ptr = new int(100);

    // 이녀석을 어떻게 쓸까에 대한 코드보다 지우는 코드를 먼저 치면 됩니다.
    // new를 사용할때의 기본 자세 입니다.

    // 1. 릭은 컴퓨터가 느려진다는 느리게 하지 않습니다.
    // 2. 릭으로 실행이 느려진다. => 마찬가지로 아니에요.

    // 3. 릭때문에 에러가 발생거나 메모리의 압박을 받을수는 있습니다.

    // 4. 자신이 친 코드때문에 릭이 남은걸 안순간 릭부터 해결해야 하고
    //    해결못하겠으면 무조건 도움을 청해야 합니다.
    
    // 5. 해결은 못할수가 없습니다.
    //    이유 내 업데이트 다 취소하면 됩니다.(가장 확실하고 가장 쉬운 방법)
    //    이걸 못합니다.(아까워해서 자신의 코드를 <= 말도 안되는)
    //    언리얼도 코드를 공개하는 시대에 자신의 코드를 아까워하는 말도 안되는
    //    그런데 신입들이 많이 실수하는게 자기 코드가 아까워
    //    이미 망했는데 계속 코드를 붙잡고 늘어집니다. 자기코드는 절대 안지워요.

    // 안남기는 제일 쉬운방법
    // new 하면 바로 delete코드 부터 치면 됩니다.
    // delete Ptr;
}
