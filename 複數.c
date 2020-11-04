#include <stdio.h>
#include <math.h>
char x;
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    float r = 0, o = 0;
    printf("¿é¤Ja¡Bb¡Bc¡Bd­È\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%s%d+%s%d\n", "A1 = ", a, "i", b);
    printf("%s%d+%s%d\n", "A2 = ", c, "i", d);
    printf("¿é¤J1 = +¡B2 = -¡B3 = *¡B4 = /");
    scanf("%d", &x);

    switch (x)
    {
    case '+':
        r = a + c;
        o = b + d;
        break;

    case '-':
        r = a - c;
        o = b - d;
        break;

    case '*':
        r = a * c - b * d;
        o = b * c + a * d;
        break;

    case '/':
        r = (float)r / (pow(c, 2) + pow(d, 2));
        o = (float)o / (pow(c, 2) + pow(d, 2));
        break;

    default:
        break;
    }
    printf("%.2f+i%.2f\n", r, o);
    return 0;
}
