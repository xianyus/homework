#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main(int argc, char const *argv[])
{
    printf("%s", "********************************************************\n");
    printf("%s", "| 直角座標與球座標轉換運算程式                          |\n");
    printf("%s", "| (1) 輸入”C”執行【直角座標 】轉【球座標 】 |\n");
    printf("%s", "| (2) 輸入”S”執行【球座標 】轉【直角座標 】 |\n");
    printf("%s", "| (3) 輸入’EOF’結束程式                                 |\n");
    printf("%s", "********************************************************\n");
    char c;
    int x, y;
    float r, o, q, z;
    scanf("%s", &c);
    if (c == 67 || c == 99)
    {
        printf("%s", "輸入直角座標");
        scanf("%d %d %f", &x, &y, &z);
        printf("%s %d %d %f %s\n", "(", x, y, z, ")");
        r = pow(pow(x, 2) + pow(y, 2) + pow(z, 2), 0.5);
        o = acos((float)z / r) * 180 / PI;
        q = atan((float)y / x) * 180 / PI;
        printf("%s %.3f %.2f %.0f", "球座標(r,theta,phi)=", r, o, q);
    }
    if (c == 83 || c == 115)
    {
        printf("%s", "輸入球座標");
        scanf("%f %f %f", &r, &o, &q);
        printf("%s %.3f %.2f %.0f %s\n", "(", r, o, q, ")");
        o = o * PI / 180;
        q = q * PI / 180;
        x = r * sin(o) * cos(q);
        y = r * sin(o) * sin(q);
        z = (r * cos(o));
        printf("%s %d %d %.0f\n", "直角座標(x,y,z)=", x, y, z);
    }
    if (c == 'EOF')
    {
        return 0;
    }

    return 0;
}
