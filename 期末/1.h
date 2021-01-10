#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define PI acos(-1)

int a()
{

    int a, b;
    printf("此題為進行加減乘除及餘數之程式碼，請輸入a與b。\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("+ is %d\n", a + b);   //總和
    printf("* is %d\n", a * b);   //乘積
    printf("- is %d\n", a - b);   //差
    printf("/ is %d\n", a / b);   //商
    printf("mod is %d\n", a % b); //餘數
    printf("\n");
    return 0;
}

int b()
{
    printf("此題要求使用者輸入自某事件發生以來經過的總時間(以秒為單位),並將其轉換為小時、分鐘和秒。\n");
    int a; //a is second
    printf("time=");
    scanf("%d", &a);
    printf("%d:", a / 3600);    //hour
    printf("%d:", a / 60 % 60); //minute
    printf("%d", a % 60);       //second
    printf("\n\n");
    return 0;
}

int c()
{
    printf("連續輸入10個非負數值,然後判斷並印出其中最大者。\n");
    int number;
    int largest = 0;

    for (int counter = 1; counter <= 10; counter++)
    {
        printf("%d: ", counter);
        scanf("%d", &number);
        if (number > largest)
        {
            largest = number;
        }
    }
    printf("%s %d\n", "largest is:", largest);
    printf("\n\n");
    return 0;
}

int d()
{
    printf("輸入1個非負數值,然後印出其各個次方。\n");
    int a;
    scanf("%d", &a);
    int n = 0;
    printf("N\t N2\t N3\t N4\t\n");
    while (n < 10)
    {
        printf("%d\t %d\t %d\t%d\n", a, a * a, a * a * a, a * a * a * a);
        a = a + 1;
        n++;
    }
    printf("\n\n");
    return 0;
}

int e()
{
    printf("階層計算\n");
    int n = 0;
    int product = 1;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("%d", product);
    printf("\n\n");
    return 0;
}

int f()
{
    printf("請撰寫一個程式讀入5個數 (1~30),並依據所讀入之數的大小,印出一行相同數目的星號。\n");
    int n[4];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        while (n[i] > 30)
        {
            printf("超過30\n");
            scanf("%d", &n[i]);
        }
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < n[j]; k++)
        {
            printf("%s", "*");
        }
        printf("%s", "\n");
    }
    printf("\n\n");
    return 0;
}

int g()
{
    printf("計算複數\n");
    printf("輸入a.b.c\n");

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
        y = (-1 * b * b + 4 * a * c);
        x3 = (float)(-b) / (2 * a);
        printf("%.3f+%.3f%s\n", x3, y, "i");
        printf("%.3f%.3f%s", x3, -1 * y, "i");
    }
    printf("\n\n");
    return 0;
}

int h()
{
    printf("猜數字\n");
    srand(time(NULL));
    int cnum = 1 + (rand() % 1000);
    int mynum = 0;
    char check = 89;
    printf("Number = %d\n", cnum);
    printf("My number = ");
    scanf("%d", &mynum);
    while (check == 89)
    {
        if (mynum == cnum)
        {
            printf("%s\n", "1. Excellent! You guessed the number!");
            printf("%s\n", "   Would you like to play again (y or n)?");
            scanf("%s", &check);
            if (check == 'Y' || check == 'y')
            {
                break;
            }
            else
            {
                printf("\n\n");
                return 0;
            }
        }
        else if (mynum < cnum)
        {
            printf("%s\n", "Too low. Try again.");
            printf("My number = ");
            scanf("%d", &mynum);
        }
        else
        {
            printf("%s\n", "Too high. Try again.");
            printf("My number = ");
            scanf("%d", &mynum);
        }
    }
    printf("\n\n");
    return h();
}

int i()
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
    printf("\n\n");
    return 0;
}

int j()
{
    printf("Write a program to compute the volume of a sphere of radius r.\n");
    int r;
    float v;
    scanf("%d", &r);
    v = (float)4 / 3 * PI * pow(r, 3);
    printf("%s %d\n", "The radius of sphere is:", r);
    printf("%s %.2f", "The volume of sphere is:", v);
    printf("\n\n");
    return 0;
}
