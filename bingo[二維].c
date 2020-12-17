#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a[5][5], b = 0;
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = rand() % 100;
            for (int k = 0; k <= i; k++)
            {
                for (int z = 0; z < j; z++)
                {
                    while (a[k][z] == a[i][j])
                    {
                        //printf("%d %d %d",k,z, a[i][j]);
                        a[i][j] = rand() % 100;
                    }
                }
            }

            printf("[%2d]%1.s", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        while (a[i][0] != a[i][1] != a[i][2] != a[i][3] != a[i][4] != 0)
        {
            b = rand() % 100;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (b == a[i][j])
                    {
                        a[i][j] = 0;
                    }
                }
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[%2d]%1.s", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}