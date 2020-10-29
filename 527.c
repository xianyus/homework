#include <stdio.h>
#include <math.h>

int main(void)
{

    printf("¿é¤Ja.b.c\n");

    int a, b, c;
    float x1, x2, x3, x4;
    double y;

    scanf("%d %d %d", &a, &b, &c);

    if (b * b - 4 * a * c >= 0)
    {
        y = sqrt(b * b - 4 * a * c);
        x1 = (-b + y) / (2 * a);
        x2 = (-b - y) / (2 * a);
        printf("%.3f %.3f", x1, x2);
    }
    else
    {
        y = sqrt(-1 * b * b + 4 * a * c);
        x3 = (float)(-b) / (2 * a);
        printf("%.3f+%.3f%s\n", x3, y, "i");
        printf("%.3f%.3f%s", x3, -1 * y, "i");
    }
    return 0;
}