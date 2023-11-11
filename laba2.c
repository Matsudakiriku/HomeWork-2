#include<stdio.h>

int main(void)
{
    #define N 3
    #define M 3
    int a[N][M] = { 1, 2, 3,
                    4, 5, 6,
                    7, 8, 9};

    printf("Matrix: \n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
        printf("%d ", a[i][j]);    
        }
    printf("\n");
    }

    return 0;

    



}