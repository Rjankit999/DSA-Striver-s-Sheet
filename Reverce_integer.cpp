#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int x = -153;
    int ans = 0;

    while (x !=0)
    {
        int rem = x % 10;
        if(ans > INT_MAX)
        ans = ans * 10 + rem;
        x = x / 10;
    }
    x = ans;
    cout << x;
}

