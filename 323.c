#include<stdio.h>
int	main(int argc, char **argv)
{
    int number;
    int largest=0;
    
    for (int counter = 0; counter < 10; counter++)
    {
        scanf("%d", &number);
        if (number>largest)
        {
            largest=number;
        }
    }
    printf("%s %d\n","largest is:",largest);
    return 0;
}