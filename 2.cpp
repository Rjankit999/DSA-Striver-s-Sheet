#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i <= n * 2 - 1; i++)
    {
        if (i <= 5)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }
        else{
            for(int j=i; j>0; j--){
                cout << "*";
            }
        }
        cout << "\n";
    }
}