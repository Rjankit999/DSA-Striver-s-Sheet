#include <bits/stdc++.h>
using namespace std;
void p(string a, int i = 0, int j)
{
    bool flage = true;
    if(i <= j){
        return;
    }
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
    if (flage == true)
    {
        cout << "String  is Palindrom";
    }
    else
    {
        cout << "String  is not Palindrom";
    }
}
int main()
{
    string a = "ABCBA";
    int i = 0;
    int j = a.size() - 1;
    p(a, i, j);
}