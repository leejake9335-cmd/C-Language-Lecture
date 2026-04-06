#include <stdio.h>
#include <stdlib.h>

// 비교 함수 정의
int comeab(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = { 5, 2, 9, 1, 6 };
    size_t size = sizeof(arr) / sizeof(arr[0]);

    // qsort를 사용한 정렬
    qsort(arr, size, sizeof(int), comeab);

    // 정렬 결과 출력
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}