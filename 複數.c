#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, x;
    float r = 0, o = 0;
    printf("輸入a、b、c、d值\n");
    scanf("%d %d %d %d", &a, &b, &c, &d, );
    printf("%s%d+%s%d 、 ", "A1= ", a, "i", b);
    printf("%s%d+%s%d\n\n", "A2= ", c, "i", d);
    printf("輸入1、2、3、4\n");
    printf("[ 1= 加、2= 減、3= 乘、4= 除 ]\n\n");
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
    printf("Ans = %.2f+i%.2f", r, o);
    return 0;
}
