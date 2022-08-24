#include <stdio.h>
int main()
{
    int b[3][3], i, j;
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
}