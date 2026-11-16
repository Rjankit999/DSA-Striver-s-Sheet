#include <bits/stdc++.h>
using namespace std;

int min(){
    
}

int main()
{
    vector<int> nums = {4, 5, 9, 45, 12, 3, 6, 5, 71};
    int n = nums.size();
    

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        for (int j = i; j < n; j++)
        {
            if (min > nums[j])
            {
                min = nums[j];
            }
        }

        int temp = nums[i];
        nums[i] = min;
        min = temp;
    }
    for (int x : nums)
    {
        cout << x << ",";
    }
}