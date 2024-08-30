#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Add(int x, int y)
{
	return x + y;
}

int substract(int x, int y)
{
	return x - y;
}

int Multiply(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

int Calculator(int x, int y, int (*fptr)(int ,int))
{
	return fptr(x,y);
}

int main()
{
#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� 
	// �����Դϴ�.


	// int (*fptr)(int, int);
	// 
	// fptr = Add;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10,20));
	// 
	// fptr = substract;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	// ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� ��������
	// �޸𸮸� �Ҵ��� �� �ֽ��ϴ�.

	// printf("Calculator�� �� : %d\n", Calculator(5,5,Multiply));


	// �Լ��� ȣ���� ������ ������ ����������, �Լ� �����ͷ�
	// �Լ��� ȣ���ϰ� �Ǹ� ���α׷��� ����Ǵ� ������ �Լ���
	// �̸��� �ü���� �����Ͽ� �Լ��� ȣ���� �� �ֽ��ϴ�.

#pragma endregion

#pragma region rand �Լ�
	// 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.


	// UTC �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����
	// �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.
	// srand(time(NULL));
 	// 
	// int random = rand() % 10+1;
	// 
	// printf("random ������ �� : %d\n", random);

#pragma endregion

#pragma region UP - DOWN ����
	int answer, guess;
	int life = 5;
	
	srand(time(NULL));

	answer = rand() % 50 + 1;

	printf("���ٿ� ���� ���� (���� : 1~50, LIFE : 5\n");

	while (life > 0)
	{
		printf("���� �Է� (���� LIFE : %d): ", life);
		scanf("%d, &guess");
		if (guess < 1 || guess > 50)
		{
			printf("1���� 50���� ���� �Է�. \n");
			continue;
		}
		if (guess < answer)
		{
			printf("�� \n");
		}
		else if (guess > answer)
		{
			printf("�ٿ� \n");
		}
		else
		{
			printf("VICTORY \n");
		}
		life--; // Ʋ���� LIFE ����
	}
	if (life == 0)
	{
		printf("DEATH \n");
	}


#pragma endregion


	return 0;
}
