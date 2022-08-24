#include <stdio.h>
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 8, 8, 9};
    int i, j, sum = 0;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of the row is= %d ", sum);
        printf("\n");
        sum = 0;
    }
    printf("\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum = sum + a[j][i];
        }
        printf("sum of the column is= %d ", sum);
        printf("\n");
        sum = 0;
    }
    // printf("left Diagonal sum of Matrix %d", sum);
    printf("\n");
}