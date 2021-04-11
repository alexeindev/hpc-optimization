#include <stdlib.h>
#include <time.h>
#include <stdio.h>

const int N = 2;
/* 
void print(int arr[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            printf("%d ", arr[i][j]);
}
 */

void multiplyMatrix(int first[N][N], int second[N][N], int mult[N][N])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int k = 0; k < N; k++)
            {
                mult[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main()
{ // Asking for the number of columns and rows = n
    /*  int n;
    printf("Ingrese el n para crear la matriz: ");
    scanf("%i", &n); */

    // Declaring the matrices
    int first[N][N], second[N][N], mult[N][N];

    // Use current time as seed for random generator
    srand(time(0));

    //Filling the two matrices
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            first[i][j] = rand() % 100;
            second[i][j] = rand() % 100;
            mult[i][j] = 0;
        }
    }

    //Multiplying the matrices and putting the result on the mult matriz
    multiplyMatrix(first, second, mult);
    /* print(first);
    print(second);
    print(mult); */

    return 0;
}