#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int n = 55;
    int ans = 0;
    int power = 1;
   
    while (n != 0)
    {
        int rem = n % 2;
        if (rem == 1)
        {
            rem = 0;
            ans = ans + rem * power;
        }
        else if (rem == 0)
        {
            rem = 1;
            ans = ans + rem * power;
        }

        n = n / 2;
        power = power * 10;
    }
    cout<<ans<<endl;
     int i=0;
    while (ans!=0)
    {
        int rem=ans%10;
        
        ans=ans/10;
    }
    cout<<1000%10;

    
}