#include <stdio.h>
int main()
{
#pragma region 주소 연산자

	// 변수의 주소 값을 반환하는 연산자입니다.

	// int data = 100;

	// 메모리 주소는 프로그램이 실행될 때마다
	// 계속 변경됩니다.

	// printf("data의 주소 : %p\n", &data);

	// 데이터의 주소 값은 해당 데이터가 저장된
	// 메모리의 시작 주소를 의미하며, 메모리의
	// 공간은 1 byte 크기로 나누어 표현합니다.
#pragma endregion
#pragma region scanf() 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다.

	int input = 0;

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에
	// 데이터를 보관하였다가 입력하는 순간 버퍼 안의
	// 내용을 프로그램에 전송합니다.

	// scanf_s("%d", &input);

	// printf("input 변수의 값 : %d\n", input);

	// while (1)
	// {
	//	scanf_s("%d", &input);

	//	printf("입력하였습니다...\n");
	// }
#pragma endregion
#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	int value = 100;

	// 포인터 변수도 자신의 메모리 공간을 가지고
	// 있으며, 포인터 변수에 변수의 주소를 저장하게
	// 되면 해당 변수의 시작 주소를 가리키게 됩니다.

	int* ptr = &value;

	printf("ptr의 값 : %p\n", ptr);
	printf("value의 주소 값 : %p\n", &value);
	printf("ptr 변수의 주소 : %p\n", &ptr);

	*ptr = 9999;

	// 포인터가 가리키는 메모리 공간의 자료형은
	// 알 수 없으므로 포인터가 가리키는 메모리의
	// 자료형을 선언해주어야 합니다.

	printf("ptr 변수가 가리키는 값 : %d\n", *ptr);
	printf("value 변수의 값 : %d\n", value);
#pragma endregion

}