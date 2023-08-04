#include <stdio.h>

int main()
{
#pragma region 이중 포인터
	// int data = 100;

	// int* ptr1 = &data;

	// int** ptr2 = &ptr1;

	// **ptr2 = 999;

	// printf("data의 값 : %d\n", data);
	// printf("**ptr2의 값 : %d\n", **ptr2);

	/*
	int a = 10;
	int b = 20;

	int* aPtr1 = &a;
	int* bPtr1 = &b;

	int ** aPtr2 = &aPtr1;
	int ** bPtr2 = &bPtr1;

	int * temp = *bPtr2;
	*bPtr2 = *aPtr2;
	*aPtr2 = temp;

	printf("**aPtr2가 가리키는 값 : %d\n", **aPtr2);
	printf("**bPtr2가 가리키는 값 값 : %d\n", **bPtr2);
	*/
#pragma endregion

#pragma region 약수

	// int value = 0;

	// scanf_s("%d", &value);

	// for (int i = 0; i <= value; i++)
	// {
		// if (value % i == 0)
		// {
			// printf("%d", i);
		// }
	// }

#pragma endregion
	return 0;
}