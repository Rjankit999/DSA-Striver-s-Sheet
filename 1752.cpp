// 1752. Check if Array Is Sorted and Rotated

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,0};
    int n=nums.size();
    int count =0;
    for(int i=0; i<n-1; i++){
        if(nums[i]>nums[i+1]){
            count++;
        }
    }
    if(nums[n-1]>nums[0]){
        count++;
    }
  
    if(count<=1){
        cout<<"True";
    }else 
        cout<<"Fals";

}