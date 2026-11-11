#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {10, 10};

    int largest = nums[0];
    int secondlargest = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (largest < nums[i])
        {
            secondlargest = largest;
            largest = nums[i];
        }
        else if (largest > nums[i] && secondlargest < nums[i])
        {
            secondlargest = nums[i];
        }
    }
    cout << largest << endl;

    cout << secondlargest;
}