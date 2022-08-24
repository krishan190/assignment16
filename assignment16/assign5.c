#include <stdio.h>
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 8, 8, 9};
    int i, j, sum = 0;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i + j == 2)
                sum = sum + a[i][j];
        }
    }

    printf("left Diagonal sum of Matrix %d", sum);
    printf("\n");
}