#include <stdio.h>

int main()
{
#pragma region 실수를 저장하는 방법

	float pi = 3.141592f;
	double doubleData = 3.1;

	// printf()함수로 소수를 출력할 때 4 byte 크기의 실수형 자료형은
	// 소수점 이하 6자리까지만 표기합니다.

	// printf()함수로 소수를 출력할 때 8 byte 크기의 실수형 자료형은
	// 소수점 이하 15자리까지만 표기합니다.

	printf("pi 변수의 값 : %f\n", pi);
	printf("doubleData 변수의 값 : %f\n", doubleData);

	// printf("pi 변수의 값 : %.10f\n", pi);
	// printf("doubleData 변수의 값 : %.16lf\n);

	// 소수점 이하의 값은 정확하지만, 소수점 이상의 값은 반올림하여
	// 표현하므로 정확하게 표가되지 않습니다.

	// 2  진수 -> 0 ~ 1
	// 8  진수 -> 0 ~ 7
	// 16 진수 -> 0 ~ F

	// A -> (10)
	// B -> (11)
	// C -> (12)
	// D -> (13)
	// B -> (14)

#pragma endregion
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

	// 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1 이라는
	// 값으로 나타내는 연산자입니다.

	// A < B (B가 A보다 크다.)
	// A > B (A가 B보다 크다.)
	// A <= B (B가 A보다 크거나 같다.)
	// A >= B (A가 B보다 크거나 같다.)
	// A == B (A와 B가 같다.)
	// A != B (A와 B는 같지 않다.)

	int result = 10 == 10;

	printf("result 변수의 값 : %d\n", result);

	// 관계 연산자는 조건이 맞을 때 1 이라는 값으로 반환되며,
	// 조건이 틀릴 때 0 이라는 값으로 변환합니다.
	// printf("result 변수의 값 : %d\n", result);

	// if 문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문입니다.

	/*if (10 != 10)
	{
		printf("if문의 결과가 '참'입니다.\n");
	}
	else
	{
		printf("if문의 결과가 '참'이 아닙니다.\n");
	}*/

	/*if (10 != 10)
	{
		printf("if문의 결과가 '참'이 아닙니다.\n");
	}
	else if (10 == 100)
	{
		printf("if문의 결과가 '참'입니다.\n");
	}*/

	// else if 문
	// if 문의 조건이 틀릴 때 else if문의 조건이 맞다면 실행되는 명령문입니다.

	//

	// else if문은 계속 연결해서 사용할 수 있습니다.

	// else 문
	// if 문과 else if문의 조건이 다 틀리면 실행되는 명령문입니다.
	int a = 10;
	int b = 20;

	if (a == b)
	{
		printf("if문의 결과가 '참' 입니다.\n");
	}
	else if (a > b)
	{
		printf("if문의 결과가 '참'입니다.\n");
	}
	else
	{
		printf("if문의 결과와 else if문의 결과가 모두 '거짓'입니다.\n");
	}

	// if문의 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion
#pragma region 논리 연산자
	// && (AND)
	if (5 == 5 && 1 < 5)
	{
		printf("AND\n");
	}

	//|| (OR)
	if (5 != 5 || 1 <= 5)
	{
		printf("OR\n");
	}

	// ! (NOT)
	if (!(0 == 1))
	{
		printf("NOT\n")
	}
#pragma endregion

}