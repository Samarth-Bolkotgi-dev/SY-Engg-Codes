#include <stdio.h>

void acceptMatrix(int r, int c, int a[r][c]) {
  int i, j;

  printf("Enter the elements of matrix:\n");

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }
}

int compactForm(int r, int c, int a[r][c], int sp[r * c + 1][3]) {
  int i, j, k = 1;

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      if (a[i][j] != 0) {
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

void display(int n, int sp[n][3]) {
  int i;

  printf("\nRow\tColumn\tValue\n");

  for (i = 0; i < n; i++) {
    printf("%d\t%d\t%d\n", sp[i][0], sp[i][1], sp[i][2]);
  }
}

void simpleTranspose(int sp[][3], int trans[][3]) {
  int rows = sp[0][0];
  int cols = sp[0][1];
  int terms = sp[0][2];

  int i, j, k = 1;

  trans[0][0] = cols;
  trans[0][1] = rows;
  trans[0][2] = terms;

  for (i = 0; i < cols; i++) {
    for (j = 1; j <= terms; j++) {
      if (sp[j][1] == i) {
        trans[k][0] = sp[j][1];
        trans[k][1] = sp[j][0];
        trans[k][2] = sp[j][2];
        k++;
      }
    }
  }
}

int main() {
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

  simpleTranspose(sp, trans);

  printf("\nSimple Transpose:");
  display(n, trans);

  return 0;
}