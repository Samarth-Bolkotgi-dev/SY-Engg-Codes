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

void subtract(int a[10][10], int b[10][10], int sub[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
}

int main()
{
    int a[10][10], b[10][10], sub[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    accept(a, r, c);

    printf("Enter second matrix:\n");
    accept(b, r, c);

    subtract(a, b, sub, r, c);

    printf("Subtraction:\n");
    print(sub, r, c);

    return 0;
}
