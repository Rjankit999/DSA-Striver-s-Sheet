#include <bits/stdc++.h>
using namespace std;

void Bubble_short(vector<int> &nums, int n)
{
    int flage = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                flage = true;
            }
        }
        if (flage == false)
        {
            cout << "Array is allradt is shorted!";
            break;
        }
    }
}
int main()
{

    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    Bubble_short(nums, n);
    for (int x : nums)
    {
        cout << x << ",";
    }
}
