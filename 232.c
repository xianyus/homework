#include <stdio.h>
int main(int argc, char const *argv[])
{
    float kg, m;
    scanf("%f %f", &kg, &m);
    m /= 100;
    printf("You BMI is %f\n", kg / (m * m));
    int bmi;
    bmi = kg / (m * m);
    if (bmi < 18.5)
    {
        printf("Underweight \n\n", bmi); /* code */
    }
    if (bmi >= 18.5 && bmi < 25)
    {
        printf("Normal \n\n", bmi); /* code */
    }
    if (bmi >= 25 && bmi < 30)
    {
        printf("Overweight \n\n", bmi); /* code */
    }
    if (bmi >= 30)
    {
        printf("Obese \n\n", bmi); /* code */
    }
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

    return 0;
}