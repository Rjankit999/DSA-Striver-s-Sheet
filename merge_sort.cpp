#include <bits/stdc++.h>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int s, int e)
{
    if (s >= e)
        return;

    int med = s + (e - s) / 2;

    merge(nums, s, med);
    merge(nums, med + 1, e);

    cout << "Left: ";

    for (int i = s; i <= med; i++)
        cout << nums[i] << " ";

    cout << "| Right: ";

    for (int i = med + 1; i <= e; i++)
        cout << nums[i] << " ";

    cout << endl;
}
int main()
{
    vector<int> nums = {5, 7, 2, 3, 9, 4, 5, 6, 1, 7};
    merge(nums, 0, nums.size() - 1);
}