#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n=0,a=0,b=1,x=0;
    float sum=0,e=1;
    scanf("%d %d",&n,&x);
    for (int i = 1; i <=n; i++)
    {
        b*=i;
        sum=(float)pow (x,i)/b;
        e=e+sum;
    
    }
    //printf("%d\n",b);
    //printf("%f\n",sum);
    printf("%f\n", e);
    return 0;
}
