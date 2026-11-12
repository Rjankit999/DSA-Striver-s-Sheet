#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 4, 5, 6, 7, 8, 90};
    bool flag = true;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < nums[i + 1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
        if (flag == true)
        {
            cout << "Array is shoted";
        }
        else
        {
            cout << "Array is not shoted";
        }
    }
}