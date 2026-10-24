#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums , int i, int j ){
     while(i<j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++; j--;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=3;

    
    rotate(nums ,0 ,nums.size()-1);
    
//second
    
    rotate(nums ,0 ,k-1);

//Third rotated
    rotate(nums ,k ,nums.size()-1);

    
    for(int i:nums){
        cout<<i<<",";
    }
    
}

  
