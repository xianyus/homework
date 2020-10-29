#include <stdio.h>
#include <math.h>
#define PI acos(-1)

int fact(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    char p = PI;
    int time = 5;
    int n = 0;
    float x = 0;
    double s = 0;
    double c = 0;
    double t = 0;
    scanf("%f", &x);
    x = x * PI / 180;
    while (n <= time)
    {
        s = s + pow(-1, n) / fact(2 * n + 1) * pow(x, 2 * n + 1);
        c = c + pow(-1, n) / fact(2 * n) * pow(x, 2 * n);
        t = s / c;
        n++;
    }
    x = x * 180 / PI;
    printf("%s %.2f %s %.lf\n", "sin(", x, ") is", s);
    printf("%s %.2f %s %.lf\n", "cos(", x, ") is", c);
    printf("%s %.2f %s %.lf\n", "tan(", x, ") is", t);

    return 0;
}
