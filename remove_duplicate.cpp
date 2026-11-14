#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 1, 2, 2, 4, 4, 5, 5, 7, 7, 8};
    set<int> s;
    int k=0;
    for (int i = 0; i < nums.size()-1; i++)
    {
        if(nums[i]!=nums[i+1]){
            nums[k+1]=nums[i];
            k++;
        }
    }

        nums[k+1]=nums[nums.size()-1];
    for (int i = 0; i < k; i++)
    {
       cout<<nums[i]<<",";
    }

}