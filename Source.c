#include <stdio.h>

#pragma region �Լ� ������
	 // �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.
/*
void Delegate()
{
	printf("�븮��~");
}

int Add(int x, int y)
{
	return x + y;
}

int Substract(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Calculator(int x, int y, int (*cptr) (int, int))
{
	printf("cptr �Լ��� ��� : %d\n", cptr(x, y));
}
*/
#pragma endregion

int main()
{
#pragma region �Լ� ������



	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� ��ġ�ؾ� �ϸ�,
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.
	// void (*fptr) ();
	// int (*cptr) (int, int);

	// Calculator(1, 2, Add);
	// Calculator(20, 10, Substract);
	// Calculator(5, 6, Multiple);
	// Calculator(20, 20, Divide);

	// fptr = Delegate;
#pragma endregion

#pragma region �Ҽ� �Ǻ� �˰���
	/*
	int number = 0;
	int count = 0;

	scanf_s("%d", &number);

	for (int i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			count++;
		}
	}

	if (count == 1)
	{
		printf("�Ҽ��Դϴ�.\n");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.\n");
	}

	*/
#pragma endregion

#pragma region ȸ�� �Ǻ� �˰���
		int flag = 0;

		const char * content = "level";

		int size = strlen(content);

		for (int i = 0; i < size / 2; i++)
		{
			if (content[i] == content[size - 1 - i])
			{
				flag = 1;
			}
			else
			{
				flag = 0;
					break;
			}
		}

		if (flag == 1)
		{
			printf("ȸ���Դϴ�.");
		}
		else
		{
			printf("ȸ���� �ƴմϴ�.");
		}

#pragma endregion

	return 0;
}