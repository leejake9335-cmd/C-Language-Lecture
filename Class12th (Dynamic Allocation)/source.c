#include <stdio.h>
#include <math.h>

struct gameobject 
{
    char rank;

    const char * name;
    
    int hp;
    
    double speed;

};

struct Ability
{
	short power;
	double speed;
	int hp; 
};

struct wod
{
    int x;
    int y;
};

int main()
{
#pragma region  구조체
    // 여러 개의 변수를 하나의 집합으로 구조화 한 다음
    // 하나의 객체를 생성하는 것입니다.

	// struct gameobject gameobject = { 'A', "Donkihotei", 387, 1.2}; 
    // 
	// printf("Rank : %c\n", gameobject.rank);
	// 
    // printf("Name : %s\n", gameobject.name);
	// 
    // printf("HP : %d\n", gameobject.hp);
	// 
    // printf("Speed : %1f\n", gameobject.speed);

    // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화 되며,
    // 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 시작됩니다.

	// gameobject.rank = 'S';
	// gameobject.name = "Leesang";
	// gameobject.hp = 400;
	// gameobject.speed = 2.5;
    // 
	// printf("\n");
    // 
    // printf("Rank : %c\n", gameobject.rank);
    // 
    // printf("Name : %s\n", gameobject.name);
    // 
    // printf("HP : %d\n", gameobject.hp);
    // 
    // printf("Speed : %1f\n", gameobject.speed);

    // 구조체 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로,
    // 구조체 내부에 있는 데이터를 초기화할 수 있습니다.

#pragma endregion

#pragma region 바이트 패딩
    // 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 
    // 읽을 수 있도록, 컴파일러가 레스지터의 블록에
    // 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// printf("gameobject의 크기 : %u\n", sizeof(struct gameobject));

    // 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
    // 가장 큰 자료형의 배수가 되도록 합니다

    // printf("Anility의 크기 : %u\n", sizeof(struct Ability));

    // 구조체의 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가 
    // 다르게 설정될 수 있습니다.

#pragma endregion

#pragma region 두 점 사이의 거리

	// struct wod slime = { -5, 7 };
	// struct wod character = { 1, 1 };
    // double intersection = sqrt(pow(slime.x - character.x, 2) + pow(slime.y - character.y, 2));
    // 
    // if (intersection <= 5.0f)
    // {
    //     printf("슬라임이 캐릭터에게 공격하러 이동합니다.\n");
    // }
    // else
    // {
    //     printf("슬라임이 계속 정찰합니다.\n");
	// }

#pragma endregion


  return 0;
}