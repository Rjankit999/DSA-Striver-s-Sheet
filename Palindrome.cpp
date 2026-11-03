#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a = "ABCBA";

    int i = 0;
    int j = a.size() - 1;
    bool flage = true;
    while (i <= j)
    {
        if (a[i] != a[j])
        {
            flage = false;
            break;
        }
        else
        {
            flage = true;

            
        }
        i++, j--;
    }
    if (flage == true)
    {
        cout << "String  is Palindrom";
    }
    else
    {
        cout << "String  is not Palindrom";
    }
}