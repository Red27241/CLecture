#include <stdio.h>
void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.
	//
	// int buffer[5] = { 0, };

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� ������ �Ǵ� �������� ������ �޸� ������ ������ �˴ϴ�.
	// buffer[0] = 100;

	//�迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.
	// printf("buffer�� 0�� ° index�� : %d\n", buffer[0]);
	// printf("buffer�� 1�� ° index�� : %d\n", buffer[1]);
	// printf("buffer�� 2�� ° index�� : %d\n", buffer[2]);

	//float dataList[] = {1.11f, 2.22f, 3.33f};

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����ŵ�ϴ�.
	// printf("dataList�� �ּ� : %p\n", dataList);
	// printf("dataList[0]�� �ּ� : %p\n", &dataList[0]);
	/*
	// ������ ����
	float * floatPtr = dataList;

	printf("floatPtr�� ����Ű�� �ּ� : %p\n", floatPtr);
	printf("floatPtr�� ����Ű�� �� : %f\n", *(floatPtr + 0));

	floatPtr = floatPtr + 2;

	printf("floatPtr�� ����Ű�� �ּ� : %p\n", floatPtr);
	printf("floatPtr�� ����Ű�� �� : %f\n", *(floatPtr + 0));
	*/
#pragma endregion
#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������
	// �����Դϴ�.

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� �����
	// ����Ű���� �� �� ������, ���ڿ� ����� ������
	// ������ �б� ���� ������ ����Ǳ� ������ ���ڿ���
	// ���� ������ �� �����ϴ�.

	const char * character = "Level";

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ
	// �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰��˴ϴ�.

	character = "cla\0ss";
	
	// ���ڿ��� ��� ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ�
	// ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�.

	printf("character�� �� : %s\n", character);

	// [C][1][a]

	// character(Class�� �����ּ�)
	printf("character�� �� : %s\n", *(character+1));
#pragma endregion

}