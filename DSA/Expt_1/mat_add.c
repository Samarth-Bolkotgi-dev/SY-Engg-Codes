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


void add(int a[10][10], int b[10][10], int sum[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    accept(a, r, c);

    printf("Enter second matrix:\n");
    accept(b, r, c);

    add(a, b, sum, r, c);

    printf("First matrix:\n");
    print(a, r, c);

    printf("Second matrix:\n");
    print(b, r, c);

    printf("Addition:\n");
    print(sum, r, c);

    return 0;
}
