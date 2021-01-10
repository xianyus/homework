#include "1.h"
int main()
{
    int x;
    printf("¿é¤JÃD¸¹:");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("2.16\n");
        a();
        break;
    case 2:
        printf("2.20\n");
        b();
        break;
    case 3:
        printf("3.23\n");
        c();
        break;
    case 4:
        printf("3.24\n");
        d();
        break;
    case 5:
        printf("3.45-a\n");
        e();
        break;
    case 6:
        printf("4.18\n");
        f();
        break;
    case 7:
        printf("5.27\n");
        g();
        break;
    case 8:
        printf("5.32\n");
        h();
        break;
    case 9:
        printf("31006-1\n");
        i();
        break;
    case 10:
        printf("31006-2\n");
        j();
        return 0;
    default:
        break;
    }

    return main();
}
