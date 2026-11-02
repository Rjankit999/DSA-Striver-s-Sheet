#include<bits/stdc++.h>
using namespace std;
 void swap(vector<int> &nums, int i , int j){
    if(i>=j){
        return ;
    }
    int temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
    swap(nums ,i+1,j-1);
 }
int main(){
    vector<int>nums={1,2,3,4,5};

    swap(nums ,0 ,nums.size()-1);
    for(int i:nums){
        cout<<i;
    }
}