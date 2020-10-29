#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main(int argc, char const *argv[])
{
    int r;
    float v;
    scanf("%d", &r);
    v = (float)4 / 3 * PI * pow(r, 3);
    printf("%s %d\n", "The radius of sphere is:", r);
    printf("%s %.2f", "The volume of sphere is:", v);
    return 0;
}
