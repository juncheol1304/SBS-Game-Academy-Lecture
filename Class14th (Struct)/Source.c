#include <stdio.h>
#include <math.h>

struct Vector2
{
	int x;
	int y;
};

struct unit
{
	char grade;
	int health;
	float attack;
	double experience;

};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct unit unit;
	// 
	// unit.grade = 'B';
	// unit.health = 100;
	// unit.attack = 32.5f;
	// unit.experience = 1075.75;
	// 
	// printf("unit 의 grade 값 : %c\n", unit.grade);
	// printf("unit 의 health 값 : %d\n", unit.health);
	// printf("unit 의 attack 값 : %f\n", unit.attack);
	// printf("unit 의 experience 값 : %lf\n", unit.experience);

	// 구조체에 있는 데이터를 초기화활 때 왼쪽에 있는 데이터부터
	// 구조체에 있는 멤버 변수의 순서로 초기화를 진행합니다.
	// struct unit marine = {'A', 60, 6.5f, 36.5};
	// 
	// printf("marine의 grade 값 : %c\n", marine.grade);
	// printf("marine 의 health 값 : %d\n", marine.health);
	// printf("marine 의 attack 값 : %f\n", marine.attack);
	// printf("marine 의 experience 값 : %lf\n", marine.experience);


	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.

#pragma endregion

#pragma region 두 점 사이의 거리
	// struct Vector2 character = { 2,3 };
	// 
	// struct Vector2 enemy = { 5,5 };
	// 
	// int x = character.x - enemy.x;
	// int y = character.y - enemy.y;
	// 
	// double distance = sqrt(pow(x, 2) + pow(y, 2));
	// 
	// if (distance < 5)
	// {
	// 	printf("공격 범위에 들어왔습니다.\n");
	// }
	// else
	// {
	// 	printf("공격 범위에서 벗어났습니다.\n");
	// }
#pragma endregion



	return 0;
}
