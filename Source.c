#include <stdio.h>
#include <limits.h>

#pragma region 열거형
	 // 명명된 정수형 상수의 집합입니다.
// enum State
// {
	// IDLE,
	// ATTACK,
	// DIE
// };

#pragma endregion


int main()
{
#pragma region 열거형

	// enum state state;

	// state = IDLE;

	// printf("statedml IDLE 값 : %d\n", state);

	// state = ATTACK;

	// printf("state의 ATTACK 값 : %d", state)

	// switch (state)
	// {
	// case IDLE: printf("대기 상태\n");
		// break;
	// case ATTACK: printf("공격 상태\n");
		//break;
	// case DIE: printf("죽음 상태\n");
		// break;
	// }
#pragma endregion


#pragma region 별

	// *
	// **
	// ***
	// ****
	// *****

	// for (int i = 0; i < 5; i++)
	// {
		// for (int j = 0;j < 5;j++)
		// {
			// if (j <= i)
			// {
				// printf("*");
			// }
		// }
		// printf("\n");
	// }
#pragma endregion

#pragma region 합
	// int sum = 0;
	// for (int i = 1 ; i <= 10 ; i ++)
	// {
		// sum += i;
		
	// }
	// printf("sum 변수의 값 : %d\n", sum);
#pragma endregion

#pragma region ASCII 코드
	// 1963년 미국 ANSI에서 표준화한 정보교환용 7비트 부호체계이다.

	// 128개의 숫자, 문자, 특수문자, 제어문자가 표현됩니다.

	// char alphabet = 64;


	// printf("alphabet 변수의 ASCII 코드의 값 : %c\n", alphabet);
	// printf("alphabet 변수의 값 : %d\n", alphabet);

	// for (int i = 0; i < 26; i++)
	// {
		// alphabet += 1;
		// printf("%c\n", alphabet);
	// }
#pragma endregion

#pragma region 최댓값과 최솟값
	// [10] [5] [11] [1] [3]
	int array[5] = { 10, 5, 11, 1, 3 };


	int max = 0;
	int min = INT_MAX;

	for (int i = 0; i < 5; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
	}
	printf("max의 값 : %d\n", max);
	printf("min의 값 : %d\n", min);


#pragma endregion

		return 0;
}