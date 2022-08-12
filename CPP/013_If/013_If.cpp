// 013_If.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void PlayerDamage(int* _PlayerHp) 
{
	printf_s("플레이어가 10의 데미지를 입었습니다.\n");
	*_PlayerHp -= 10;
}

int main()
{
	//if (메모리영역)
	//{
	//}


	int PlayerHp = 100;
	bool PlayerDeath = false;
	if (PlayerHp)
	{ // 코드 시작 
		PlayerDeath = false;
		// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
		// 플레이어가 살아있다는 뜻이 된다.
	} // 코드 끝

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}


	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

	{
		PlayerDamage(&PlayerHp);
		// if는 else if와 합쳐지면 다음과 같은 규칙을 가진다.

		if (0 >= PlayerHp) // 거짓
		{ // 코드 시작 
			PlayerDeath = true;
			// (메모리영역) 메모리영역이 참일때만 코드가 시작된다.
			// 플레이어가 살아있다는 뜻이 된다.
			printf_s("플레이어가 죽었습니다.\n");
			return 0;
		}
		else if (20 >= PlayerHp) // 거짓.
		{
			printf_s("플레이어가 사망 직전입니다.\n");
		}
		else if (50 >= PlayerHp) // 실행
		{
			printf_s("플레이어가 중상입니다.\n");
		}
		else
		{
			printf_s("플레이어가 살았습니다.\n");
		}
	}

}
