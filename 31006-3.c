#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main(int argc, char const *argv[])
{
    printf("%s", "********************************************************\n");
    printf("%s", "| �����y�лP�y�y���ഫ�B��{��                          |\n");
    printf("%s", "| (1) ��J��C������i�����y�� �j��i�y�y�� �j |\n");
    printf("%s", "| (2) ��J��S������i�y�y�� �j��i�����y�� �j |\n");
    printf("%s", "| (3) ��J��EOF�������{��                                 |\n");
    printf("%s", "********************************************************\n");
    char c;
    int x, y;
    float r, o, q, z;
    scanf("%s", &c);
    if (c == 67 || c == 99)
    {
        printf("%s", "��J�����y��");
        scanf("%d %d %f", &x, &y, &z);
        printf("%s %d %d %f %s\n", "(", x, y, z, ")");
        r = pow(pow(x, 2) + pow(y, 2) + pow(z, 2), 0.5);
        o = acos((float)z / r) * 180 / PI;
        q = atan((float)y / x) * 180 / PI;
        printf("%s %.3f %.2f %.0f", "�y�y��(r,theta,phi)=", r, o, q);
    }
    if (c == 83 || c == 115)
    {
        printf("%s", "��J�y�y��");
        scanf("%f %f %f", &r, &o, &q);
        printf("%s %.3f %.2f %.0f %s\n", "(", r, o, q, ")");
        o = o * PI / 180;
        q = q * PI / 180;
        x = r * sin(o) * cos(q);
        y = r * sin(o) * sin(q);
        z = (r * cos(o));
        printf("%s %d %d %.0f\n", "�����y��(x,y,z)=", x, y, z);
    }
    if (c == 'EOF')
    {
        return 0;
    }

    return 0;
}
