#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 4, 4, 4, 4, 7, 9};
    int target = 4;
    int s, e, med;
    s = 0, e = nums.size()-1;
    med = s + (e - s) / 2;
    pair<int ,int>sum={-1 , -1};
    

//First Elemant ......
while (s <= e)
    {
        med=s+(e-s)/2;
        // first cace
        if (target == nums[med])
        {
            e=med-1;
            sum.first=med;
        }

        // scond cace
        else if (target > nums[med])
        {
            s=med+1;
        }

        // Third cace
        else if (target < nums[med])
        {
            e=med-1;

        }
        
    }

    // Last Elemant...........

    s=0, e=nums.size()-1;
    while (s <= e)
    {
        med=s+(e-s)/2;
        // first cace
        if (target == nums[med])
        {
            s=med+1;
            sum.second=med;
        }

        // scond cace
        else if (target > nums[med])
        {
            s=med+1;
        }

        // Third cace
        else if (target < nums[med])
        {
            e=med-1;

        }
        
    }
    cout<<sum.first<<","<<sum.second;
}