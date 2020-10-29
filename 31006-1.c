#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    printf("%s\n", "Input the Coordinate Points of the Line:");
    int num[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("%s %d %s %d\n", "Coordinates of Point1: x1 = ", num[0], " y1 = ", num[1]);
    printf("%s %d %s %d\n", "Coordinates of Point1: x2 = ", num[2], " y2 = ", num[3]);
    float m = 0;
    m = (float)(num[3] - num[1]) / (num[2] - num[0]);
    printf("%s %.2f", "Slope of the Line:", m);
    return 0;
}
