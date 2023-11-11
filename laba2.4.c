#include<stdio.h>
#define N 5

void FillArrayWithSpiral(int a[N][N])
{
    int MinRow = 0;
    
    int MinCol = 0;

    int MaxCol = N - 1;

    int MaxRow = N -1 ;

    int value = 1;

    while (value <= N * N)
    {
        for (int col = MinCol; col <= MaxCol; col++)
        {
            a[MinRow][col] = value++;
        }

        for (int row = MinRow + 1; row <= MaxRow;  row++)
        {
            a[row][MaxCol] = value++;
        }

        for (int col = MaxCol -1; col >= MinCol; col--)
        {
            a[MaxRow][col] = value++;
        }

        for (int row = MaxRow - 1; row > MinRow; row--)
        {
            a[row][MinCol] = value++;
        }

        MinRow++;
        MinCol++;
        MaxCol--;
        MaxRow--;
    }
}

int main(void)

{
    
    int a[N][N];

    FillArrayWithSpiral(a);
    
    
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {          
            printf("%3d ", a[row][col]);
        }

        printf("\n");
    }   

    printf("\n");

    return 0;
}