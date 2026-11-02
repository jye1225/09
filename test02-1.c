#include <stdio.h>
#define SIZE 5

int main(void)
{
    int grade[SIZE];
    int i;

    printf("5명의 점수를 입력하세요.\n");
    for (i = 0; i < SIZE; i++)
        if (scanf("%d", &grade[i]) != 1)
            return 1;

    for (i = 0; i < SIZE; i++)
        printf("grade[%d] = %d\n", i, grade[i]);

    return 0;
}
