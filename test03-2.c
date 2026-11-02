#include <stdio.h>
#define SIZE 5

void compare_array(int a[], int b[], int size)
{
    int i;
    int flag_same = 1;

    for (i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            printf("다른 값의 인덱스 : %d (a=%d, b=%d)\n", i, a[i], b[i]);
            flag_same = 0;
        }
    }

    if (flag_same)
        printf("배열은 같은 값을 가집니다.\n");
    else
        printf("배열은 다른 값을 가집니다.\n");
}

int main(void)
{
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};

    compare_array(a, b, SIZE);

    // 일부 값을 바꿔서 다른 위치도 확인
    b[1] = 20;
    b[3] = 40;
    compare_array(a, b, SIZE);

    return 0;
}
