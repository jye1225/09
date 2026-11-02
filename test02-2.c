#include <stdio.h>
#define SIZE 5

int main(void)
{
    int grade[SIZE];
    int i;
    int sum = 0;
    int average;

    for (i = 0; i < SIZE; i++)
    {
        printf("학생 성적을 입력하세요 : ");
        if (scanf("%d", &grade[i]) != 1)
            return 1;
        sum += grade[i];
    }

    average = sum / SIZE;
    printf("성적 평균 : %d\n", average);

    return 0;
}
