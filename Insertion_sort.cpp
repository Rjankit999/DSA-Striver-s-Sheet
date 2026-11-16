#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            int temp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = temp;
            j--;
        }
    }
}
int main()
{

    vector<int> nums = {5, 4, 2, 1, 0, 6};
    int n = nums.size();
    Insertion_sort(nums, n);
    for (int x : nums)
    {
        cout << x << ",";
    }
}
