#include <stdio.h>
void main()
{
    int i, j, row, col;
    printf("array 1\n");
    printf("enter the value of row:-");
    scanf("%d", &row);
    printf("enter the value of column:-");
    scanf("%d", &col);
    int a[row][col], b[row][col], c[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int k, l;
    printf("array 2\n");
    for (k = 0; k < row; k++)
    {
        for (l = 0; l < col; l++)
        {
            printf("b[%d][%d]=", k, l);
            scanf("%d", &b[k][l]);
        }
    }
    printf("multiplication of two arrays is :-\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < row; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
