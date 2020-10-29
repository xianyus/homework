#include <stdio.h>
int main(int argc, char **argv)
{
    int a;//a is second
    scanf("%d", &a);
    printf("%d:", a / 3600);//hour
    printf("%d:", a / 60 % 60);//minute
    printf("%d", a % 60);//second

    
    return 0;
}
