#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0; 
    printf("%4s%21s\n", "Year", "Amount on deposit");
    for (unsigned int year = 1; year <= 10; ++year)
    {
        for (float rate = .05; rate < .1; rate += .01)
        {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4u%21.2f\n", year, amount); 
        }
        printf("%s", "\n");
    }
    return 0;
}
