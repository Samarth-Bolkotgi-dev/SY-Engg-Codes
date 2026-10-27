#include <stdio.h>

void acceptMatrix(int r, int c, int a[r][c]){
    int i, j;

    printf("Enter the elements of matrix:\n");

    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

int compactForm(int r, int c, int a[r][c], int sp[r * c + 1][3]){
    int i, j, k = 1;

    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            if (a[i][j] != 0){
                sp[k][0] = i;
                sp[k][1] = j;
                sp[k][2] = a[i][j];
                k++;
            }
        }
    }

    sp[0][0] = r;
    sp[0][1] = c;
    sp[0][2] = k - 1;

    return k;
}

void display(int n, int sp[n][3]){
    int i;

    printf("\nRow\tColumn\tValue\n");

    for (i = 0; i < n; i++){
        printf("%d\t%d\t%d\n",
               sp[i][0],
               sp[i][1],
               sp[i][2]);
    }
}

void fastTranspose(int sp[][3], int trans[][3])
{
    int cols = sp[0][1];
    int terms = sp[0][2];

    int total[cols];
    int index[cols + 1];

    int i, p;

    trans[0][0] = cols;
    trans[0][1] = sp[0][0];
    trans[0][2] = terms;

    for (i = 0; i < cols; i++){
        total[i] = 0;
    }
    
    for (i = 1; i <= terms; i++){
        total[sp[i][1]]++;
    }

    index[0] = 1;

    for (i = 1; i <= cols; i++){
        index[i] = index[i - 1] + total[i - 1];
    }

    for (i = 1; i <= terms; i++){
        p = index[sp[i][1]];

        trans[p][0] = sp[i][1];
        trans[p][1] = sp[i][0];
        trans[p][2] = sp[i][2];

        index[sp[i][1]]++;
    }
}

int main()
{
    int r, c, n;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sp[r * c + 1][3];
    int trans[r * c + 1][3];

    acceptMatrix(r, c, a);

    n = compactForm(r, c, a, sp);

    printf("\nOriginal Sparse Matrix:");
    display(n, sp);

    fastTranspose(sp, trans);

    printf("\nFast Transpose:");
    display(n, trans);

    return 0;
}