#include <stdio.h>

#pragma region ����ü
	// ���� ���� ������ �ϳ��� ��������
	// ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�

	  // struct GameObject
	  // {
		// int health;
		//  char grade;
		  // Padding 
		//  double x;

		// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
		// �������� �����Ƿ�, ����ü ���쿡 �ִ� �����͸�
		// �ʱ�ȭ�� �� �����ϴ�.
	  // };


#pragma endregion

// struct Player
// {
	// float x;
	// float y;
// };

// struct Enemy
// {
	// float x;
	// float y;
// };

	int main()
{
#pragma region ����ü ����
		/*
		struct GameObject gameObject;

		gameObject.x = 3.45;
		gameObject.health = 100;

		printf("gameoBject.x�� �� : %lf\n", gameObject.x);
		printf("gameoBject.hralth�� �� : %d\n", gameObject.health);


		struct GameObject object = {300, 6.25};

		printf("object.x�� �� : %lf\n", object.x);
		printf("object.hralth�� �� : %d\n", object.health);
		*/
#pragma endregion

#pragma region ����Ʈ �е�
		// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ����
		// �� �ֵ���, �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ��
		// �е� ���ִ� ����ȭ �۾��Դϴ�.

		// printf("GameObject�� ũ�� : %d", sizeof(struct GameObject));

		// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ
		// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region ������ �Լ�

		// int result = pow(5, 2);
		// float decimal = 100.0f;

		// sart : ��ȯ�ϴ� ������ long double, double, float
		// result = sqrt(decimal);

		// printf("result ������ ��� : %d\n", result);
		// printf("decimal ������ ��� : %d\n", decimal);
#pragma endregion

#pragma region �� �� ������ �Ÿ�
		// struct Player player = { 1.0f, 2.0f };
		// struct Enemy enemy = { 3.0f, 4.0f };

		// float x = player.x - enemy.x;
		// float y = player.y - enemy.y;

		// double distance;  sqrt(pow(x, 2) + pow(y, 2));

		// printf("�� �� ������ �Ÿ� : %lf", distance);

#pragma endregion

		return 0;
}