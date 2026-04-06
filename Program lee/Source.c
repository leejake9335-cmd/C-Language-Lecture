#include <stdio.h>

// 일반 함수 정의
void start()
{
    printf("hi my name is Leesungjun\n");
}

int ab(int a, int b)
{
    return a + b;
}

int operate(int x, int y, int (*operation)(int, int))
{
    return operation(x, y);
}

int main()
{
#pragma region 함수 포인터 선언

    // 함수 포인터를 선언할 때는 반환형과 매개변수 리스트를 정확히 지정
    // 반환형 (*포인터이름)(매개변수타입1, 매개변수타입2, ...);
    // void (*end)();

    // 함수 포인터에 함수 주소 할당
    // end = start;

    // 함수 포인터를 통해 함수 호출
    // end();

    // return 0;
#pragma endregion

#pragma region 함수 포인터 초기화

    // funcPtr 함수 포인터는 add 함수의 주소를 저장하며, 이를 통해 add 함수를 호출

    // 함수 포인터 선언 및 초기화
    // int (*funcPtr)(int, int) = add;

    // 함수 포인터를 사용한 호출
    // int result = funcPtr(5, 7);

    // printf("Result : %d\n", result);

    // return 0;

#pragma endregion

#pragma region 함수 포인터를 매개변수로
    // operate 함수가 add 함수 포인터를 매개변수로 받아 동작

    int result = operate(10, 20, add);

    printf("Operation Result: %d\n", result);

    return 0;
#pragma endregion


}
