#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int grade[SIZE];
    int score[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        grade[i] = rand() % 100;

    // 배열은 원소를 하나씩 복사
    for (i = 0; i < SIZE; i++)
        score[i] = grade[i];

    for (i = 0; i < SIZE; i++)
        printf("grade[%d] = %d, score[%d] = %d\n", i, grade[i], i, score[i]);

    return 0;
}
