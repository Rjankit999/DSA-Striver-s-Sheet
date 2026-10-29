#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int x = 214748364;
    int ans = 0;

    while (x !=0)
    {
        int rem = x % 10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10){
            cout<<-1;
        }
        ans = ans * 10 + rem;
        x = x / 10;
    }
    x = ans;
    cout << x;
    
}

