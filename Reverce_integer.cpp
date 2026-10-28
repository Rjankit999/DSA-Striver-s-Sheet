#include <iostream>
using namespace std;

int main()
{
    int x = 153423646;
    int ans = 0;
    if (x < 0)
    {
        while (x < 0)
        {
            int rem = x % 10;
            ans = ans * 10 + rem;
            x = x / 10;
        }
    }
    else{
    while (x > 0)
    {
        int rem = x % 10;
        ans = ans * 10 + rem;
        x = x / 10;
    }
}
    x=ans;
    cout<<x;
}