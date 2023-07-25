#include <stdio.h>

// 자료형 함수의 이름 (매개 변수)
void Function() 
{
	// 같은 이름의 함수를 선언할 수 없습니다.
	printf("Function\n");
}

// 반환형
// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지
// 않으면 원하는 값을 얻을 수 없습니다.
char charFunction()
{

}

#pragma region 매개 변수
// 함수의 정의에서 전달받은 인수를 함수 내부로
// 전달하기 위해 사용하는 변수입니다.

void Calculator(int x)
{
	x = 450;
	printf("x의 값 : %d\n", x);
}

void Swap(int * x, int * y)
{
	int temp = *y;
	*y = *x;
	*x = temp;
}

// 매개 변수는 함수 내부에서만 연산이 이울어지며,'
// 함수가 종료되면 메모리에서 사라지며, 여러 개의
// 매개 변수를 생성할 수 있습니다.
#pragma endregion
void main()
{
#pragma region 범용(void) 포인터
	// 자료형이 정해지지 않은 상태로 모든
	// 자료형을 저장할 수 있는 포인터입니다.

	// int( 4 byte )
	// int data = 100;

	// float ( 4 byte)
	// float pi = 3.141592f;

	// void * ptr = &data;

	// 범용 포인터는 메모리 주소에 접근해서
	// 값을 변경할 수 없습니다.
	// *ptr = 10; ERROR
	
	// *(int*)ptr = 9999;

	// printf("ptr이 가리키는 값 : %d\n", *(int*)ptr);
	// printf("data의 값 : %d\n", data);

	// ptr = &pi;

	// printf("ptr이 가리키는 값 : %f\n", *(float*)ptr);
	// printf("pi의 값 : %f\n", pi);

#pragma endregion

#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기
	// 위해 독립적으로 설계된 코드의 집합입니다.

	// 함수의 호출
	// for (int i = 0; i < 5; i++) 
	// {
	// 	 Function();
	// }

	// printf("%c\n", charFunction());
	// charFunction();
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로
	// 전달되는 값입니다.

	// int value = 100;
	// Calculator(value); 
	// printf("value의 값 : %d\n", value);

	// 값 바꾸기
	int a = 10;
	int b = 20;

	int temp = 0;

	temp = b;
	b = a;
	a = temp;

	Swap(a, b);
#pragma endregion

}