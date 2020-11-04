#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, x;
    float r = 0, o = 0;
    printf("¿é¤Ja¡Bb¡Bc¡Bd­È\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%s%d+%s%d\n", "A1 = ", a, "i", b);
    printf("%s%d+%s%d\n", "A2 = ", c, "i", d);
    printf("¿é¤J1¡B2¡B3¡B4\n");
    printf("1 = +¡B2 = -¡B3 = *¡B4 = /\n");
    scanf("%d", &x);
    

    switch (x)
    {
    case 1:
        r = a + c;
        o = b + d;
        break;

    case 2:
        r = a - c;
        o = b - d;
        break;

    case 3:
        r = a * c - b * d;
        o = b * c + a * d;
        break;

    case 4:
        r = (float)(a * c + b * d) / (pow(c, 2) + pow(d, 2));
        o = (float)(b * c - a * d) / (pow(c, 2) + pow(d, 2));
        break;

    default:
        break;
    }
    printf("%.2f+i%.2f\n", r, o);
    return 0;
    
}
