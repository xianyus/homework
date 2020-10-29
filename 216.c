#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("+ is %d\n", a + b);   //總和
    printf("* is %d\n", a * b);   //乘積
    printf("- is %d\n", a - b);   //差
    printf("/ is %d\n", a / b);   //商
    printf("mod is %d\n", a % b); //餘數
    return 0;
}