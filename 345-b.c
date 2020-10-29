#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n = 0;
    int b = 1;
    float sum = 0, e = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        b = b * i;
        sum = (float)1 / b;
        e = e + sum;
    }
    printf("%f", e);

    return 0;
}
