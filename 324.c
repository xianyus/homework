#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    int n = 0;
    printf("N\t N2\t N3\t N4\t\n");
    while (n < 10)
    {       
        printf("%d\t %d\t %d\t%d\n", a, a * a, a * a * a, a * a * a * a);
        a = a + 1;
        n++;
    }

    return 0;
}
