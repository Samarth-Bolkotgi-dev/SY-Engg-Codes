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

void transpose(int a[10][10], int t[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }
}

int main()
{
    int a[10][10], t[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    accept(a, r, c);

    transpose(a, t, r, c);

    printf("Original matrix:\n");
    print(a, r, c);

    printf("Transpose:\n");
    print(t, c, r);

    return 0;
}
