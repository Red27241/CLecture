#include <stdio.h>
#include <limits.h>

#pragma region ������
	 // ���� ������ ����� �����Դϴ�.
// enum State
// {
	// IDLE,
	// ATTACK,
	// DIE
// };

#pragma endregion


int main()
{
#pragma region ������

	// enum state state;

	// state = IDLE;

	// printf("statedml IDLE �� : %d\n", state);

	// state = ATTACK;

	// printf("state�� ATTACK �� : %d", state)

	// switch (state)
	// {
	// case IDLE: printf("��� ����\n");
		// break;
	// case ATTACK: printf("���� ����\n");
		//break;
	// case DIE: printf("���� ����\n");
		// break;
	// }
#pragma endregion


#pragma region ��

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

#pragma region ��
	// int sum = 0;
	// for (int i = 1 ; i <= 10 ; i ++)
	// {
		// sum += i;
		
	// }
	// printf("sum ������ �� : %d\n", sum);
#pragma endregion

#pragma region ASCII �ڵ�
	// 1963�� �̱� ANSI���� ǥ��ȭ�� ������ȯ�� 7��Ʈ ��ȣü���̴�.

	// 128���� ����, ����, Ư������, ����ڰ� ǥ���˴ϴ�.

	// char alphabet = 64;


	// printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
	// printf("alphabet ������ �� : %d\n", alphabet);

	// for (int i = 0; i < 26; i++)
	// {
		// alphabet += 1;
		// printf("%c\n", alphabet);
	// }
#pragma endregion

#pragma region �ִ񰪰� �ּڰ�
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
	printf("max�� �� : %d\n", max);
	printf("min�� �� : %d\n", min);


#pragma endregion

		return 0;
}