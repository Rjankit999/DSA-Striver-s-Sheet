#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>nums={7,8,9,1,2,3,4,5,6};
    int target=1;

    int med, low,high;
    low=0; high=nums.size()-1;
    while(low<=high){
        med=low+high/2;

        if(nums[med]> target){
            low=med+1;
        }
        
    }
}