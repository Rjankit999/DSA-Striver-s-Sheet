#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {4,11,3};
    int i, j, med;
    i = 0;
    j = nums.size() - 1;

    if(nums.size()==1){
        return nums[0];
    }
    while (i <= j)
    {
        med = (i + j) / 2;
        if (nums[med - 1] < nums[med] && nums[med] > nums[med + 1])
        {
            cout << nums[med];
            break;
        }
        else if (nums[med - 1] < nums[med])
        {
            i = med + 1;
        }
        else
        {
            j = med - 1;
        }
    }
}