#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a[25], k = 0, b = 0, p = 0;
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int z = 0; z < 5; z++)
        {
            a[k] = rand() % 100;
            for (int j = 0; j < k; j++)
            {
                while (a[k] == a[j])
                {
                    //printf("%d %d %d %d\n",k,a[k],j,a[j]);
                    a[k] = rand() % 100;
                }
            }

            printf("[%2d]%1.s", a[k]);
            k++;
        }
        printf("\n");
    }
    printf("\n");
    while (p != 1)
    {
        while (a[0, 1, 2, 3, 4] != 0 || a[5, 6, 7, 8, 9] != 0 || a[10, 11, 12, 13, 14] != 0 || a[15, 16, 17, 18, 19] != 0 || a[20, 21, 22, 23, 24] != 0 || a[0, 5, 10, 15, 20] != 0 || a[1, 6, 11, 16, 21] != 0 || a[2, 7, 12, 17, 22] != 0 || a[3, 8, 13, 18, 23] != 0 || a[4, 9, 14, 19, 24] != 0)
        {
            b = rand() % 100;
            for (int i = 0; i < 25; i++)
            {
                if (a[i] == b)
                {
                    printf("%d ", b);
                    a[i] = 0;
                }
            }
            p = 1;
        }
    }

    printf("\n");

    k = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("[%2d]%1.s", a[k]);
            k++;
        }
        printf("\n");
    }
    return 0;
}
