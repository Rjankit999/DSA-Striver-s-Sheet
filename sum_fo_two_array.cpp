#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums1 = {0};
    vector<int> nums2 = {0};

    int m = nums1.size();
    int n = nums2.size();
    vector<int> toatl;

    int i = m - 1;
    int j = n - 1;
    int sum = 0;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        sum = nums1[i] + nums2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        toatl.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = nums1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        toatl.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        sum = nums2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        toatl.push_back(sum);
        j--;
    }
    if(carry>0){
        toatl.push_back(carry);
    }

    reverse(toatl.begin(), toatl.end());

    for (int i : toatl)
    {
        cout << i << ",";
    }
}