#pragma once

// int Value = 10;

// 실체화 되면 안된다.
// = 0으로 값을 넣어준다는것은 실체가 있기 때문에 값을 받을수 있다는 뜻이 되서
// 실제 변수가 되어버립니다.
// extern을 붙였다면 초기화 해주면 안된다.
extern int MonsterCount /*= 0*/;