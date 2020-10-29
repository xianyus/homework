#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n[4];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < n[j]; k++)
        {
            printf("%s", "*");
        }
        printf("%s", "\n");
    }

    return 0;
}
