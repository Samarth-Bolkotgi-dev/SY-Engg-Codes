#include <stdio.h>

void accept(int a[10][10], int r, int c)
{
    int i, j;

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int a[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void multiply(int a[10][10], int b[10][10], int mul[10][10],
              int r1, int c1, int c2)
{
    int i, j, k;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            mul[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Multiplication not possible.\n");
        return 0;
    }

    printf("Enter first matrix:\n");
    accept(a, r1, c1);

    printf("Enter second matrix:\n");
    accept(b, r2, c2);

    multiply(a, b, mul, r1, c1, c2);

    printf("Multiplication:\n");
    print(mul, r1, c2);

    return 0;
}
