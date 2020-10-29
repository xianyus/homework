#include <stdio.h>
#include <math.h>
int main()
{
    int binarynum;
    int sum = 0;
    scanf("%d", &binarynum);
    for (int i = 0; i < 5; i++)
    {
        sum = sum + binarynum % 10 * pow(2, i);
        binarynum /= 10;
    }
    printf("%d", sum);

    return 0;
}