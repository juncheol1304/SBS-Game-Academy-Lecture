#include <stdio.h>
#include <stdlib.h>

// int password = 10;
// 
// static int score;
// 
// void Increase()
// {
// 	static int score = 0;
// 	
// 	score++;
// 
// 	printf("score : %d\n", score);
// }

int main()
{
#pragma region ������ ��ȿ ����
	// ������ ���� ��ġ�� ���� �ش� ������ �޸� ��ȯ �ñ�
	// �ʱ�ȭ ����, ����Ǵ� ��Ҹ� �ǹ��ϴ� �����Դϴ�.

#pragma region ���� ����
	// �Լ� ������ ����� ������ �Լ� �������� ����� �� ������,
	// �Լ��� ����Ǹ� �޸𸮿��� ������� Ư¡�� ������ �����Դϴ�.

	// int data = 10;
	// 
	// {
	// 	int data = 20;
	// 	printf("{} �ȿ� �ִ� data ������ �� : %d\n", data);
	// }
	// printf("{} �ٱ��� �ִ� data ������ �� : %d\n", data);
#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο� ����� ������ ���α׷��� ������ ��� ����������
	// ������ �� ������, ���α׷��� ����� �� �޸𸮿��� �����ǰ�
	// ���α׷��� ����� �� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.

	// printf("���� ���� password�� �� : %d\n", password);

#pragma endregion

#pragma region ���� ����
	// ���α׷��� ����� �� �� �ѹ��� �ʱ�ȭ�� �̷������
	// ���α׷��� ����� �� �޸𸮿� �����ǰ�, ���α׷���
	// ����� �� �޸𸮿��� �����Ǵ� Ư¡�� ������ �����Դϴ�.
	
	// Increase();
	// Increase();
	// Increase();
	// Increase();
	// Increase();

#pragma endregion


#pragma endregion

#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸�
	// �Ҵ��ϴ� �۾��Դϴ�.
	
	// int*ptr = malloc(sizeof(int));
	// int* dynamicArray = (int*)malloc(sizeof(int) * 3);

	// �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ�
	// ��ȯ�ϱ� ������ �ڷ����� ��ȯ�� ���� �޸𸮿�
	// �Ҵ��ؾ� �մϴ�.

	// if (ptr != NULL)
	// {
	// 	*ptr = 99;
	// 	printf("���� �Ҵ��� �޸��� �� : % d\n", *ptr);
	// }
	// 
	// dynamicArray[0] = 10;
	// dynamicArray[1] = 20;
	// dynamicArray[2] = 30;
	// 
	// free(dynamicArray);
	// 	
	// dynamicArray = (int*)malloc(sizeof(int) * 5);
	// 
	// for (int i = 0; i < (sizeof(int) * 5) / sizeof(int); i++)
	// 	{
	// 		dynamicArray[i] = i;
	// 		
	// 		printf("dynamicArray[%d] = %d\n", i, dynamicArray[i]);
	// 	}

	//  �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �ֱ� ������
	// ����� ������ ���� �������־�� �մϴ�.
	// free(ptr);
	
	// ���� �Ҵ��� ���� �ð��� ���������� �޸���
	// ũ�⸦ �����ų �� ������, �������� �޸���
	// �ױⰡ �Ҵ��� �� ����Ʈ ������ �����մϴ�.

#pragma endregion

	return 0;
}
