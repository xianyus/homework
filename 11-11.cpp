#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <time.h>
using namespace std;
int main()
{
    int elec[24];
    int sum = 0;
    int ra = 0, a = 0, b=0;
    srand(time(NULL));
    for (int i = 0; i < 24; ++i)
    {

        ra = 1 + (rand() % 1000);
        while (ra <= 100)
        {
            srand(time(NULL));
            ra = 1 + (rand() % 1000);
        }        
        elec[i] = ra;
        sum += ra;
        if (i<=6&&i<=22)
        {
            a+=ra;
            a=a*3.75;
        }
        else
        {
            b+=ra;
            b=b*1.75;
        }
        
    }
    
    
    sort(elec, elec + 24);
    cout << "\n";
    cout << "平均: " << sum / 24 << endl;
    cout << "最小值: " << elec[0] << endl;
    cout << "最大值: " << elec[23] << endl;
    cout << "負載因數: " << (float)sum / 24 / elec[23] << endl;
    cout << "電費: " << a+b << endl;
    
    return 0;
}