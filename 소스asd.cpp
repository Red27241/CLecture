#include <stdio.h>
void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.
	//
	// int buffer[5] = { 0, };

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일 되는 시점부터 고정된 메모리 공간을 가지게 됩니다.
	// buffer[0] = 100;

	//배열의 경우 첫 번째 원소는 0부터 시작합니다.
	// printf("buffer의 0번 째 index는 : %d\n", buffer[0]);
	// printf("buffer의 1번 째 index는 : %d\n", buffer[1]);
	// printf("buffer의 2번 째 index는 : %d\n", buffer[2]);

	//float dataList[] = {1.11f, 2.22f, 3.33f};

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다.
	// printf("dataList의 주소 : %p\n", dataList);
	// printf("dataList[0]의 주소 : %p\n", &dataList[0]);
	/*
	// 포인터 연산
	float * floatPtr = dataList;

	printf("floatPtr이 가리키는 주소 : %p\n", floatPtr);
	printf("floatPtr이 가리키는 값 : %f\n", *(floatPtr + 0));

	floatPtr = floatPtr + 2;

	printf("floatPtr이 가리키는 주소 : %p\n", floatPtr);
	printf("floatPtr이 가리키는 값 : %f\n", *(floatPtr + 0));
	*/
#pragma endregion
#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의
	// 집합입니다.

	// 문자열의 경우 포인터를 이용하여 문자열 상수를
	// 가리키도록 할 수 있으며, 문자열 상수는 데이터
	// 영역의 읽기 전용 공간에 저장되기 때문에 문자열의
	// 값을 변경할 수 없습니다.

	const char * character = "Level";

	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기가
	// 결정되며, 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.

	character = "cla\0ss";
	
	// 문자열의 경우 문자 배열 사이에 무효의 문자를 넣게 되면
	// 무효의 문자까지만 문자열을 출력합니다.

	printf("character의 값 : %s\n", character);

	// [C][1][a]

	// character(Class의 시작주소)
	printf("character의 값 : %s\n", *(character+1));
#pragma endregion

}