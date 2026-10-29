#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 636;
    int ans = 0;
    int power = 1;
    int copli=0;
      if(n==0){
        return 1;
    }
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
  
    int i = 0;
    int pow = 1;
    while (ans != 0) // 1 0 1
    {
        int rem = ans % 10;
        copli += rem * pow;
        pow *= 2;

        ans = ans / 10;
        i++;
    }
    cout << copli<<endl;
   
    

}