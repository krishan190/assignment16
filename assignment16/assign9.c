#include <stdio.h>
int main()
{
    int a[3][3] = {0, 1, 3, 0, 0, 0, 0, 0, 9};
    int i, j, count = 0;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (a[i][j] != 0)
                count++;
        }
    }
    if (count < 9 / 2)
        printf("Matrix is sparse:");
    else
    {
        printf("Matrix is not sparse:");
    }
    printf("\n");
}