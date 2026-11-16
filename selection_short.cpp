#include <bits/stdc++.h>
using namespace std;

void selection_short(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }
}

int main()
{
    vector<int> nums = {4, 5, 9, 45, 12, 3, 6, 5, 71};
    int n = nums.size();

    selection_short(nums, n);

    for (int x : nums)
    {
        cout << x << ",";
    }
}