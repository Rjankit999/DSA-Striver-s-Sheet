#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={2,4,5,8,6,4,2};
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1]> nums[i]){
            cout<<nums[i-1];
            return 0;
        }
    }
}

