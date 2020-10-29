#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
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
            printf("%s\n", "1. Excellent! You guessed the number!\n   Would you like to play again (y or n)?");
            scanf("%s", &check);
            if (check == 'Y' || check == 'y')
            {
                break;
            }
            else
            {
                return 0;
            }
        }
        else if (mynum < cnum)
        {
            printf("%s\n", "Too low. Try again.");
            scanf("%d", &mynum);
        }
        else
        {
            printf("%s\n", "Too high. Try again.");
            scanf("%d", &mynum);
        }
    }
    return main();
}