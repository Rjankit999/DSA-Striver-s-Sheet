#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k=3; int n=nums.size();

vector<int>arr(nums.size());
    for(int i=0; i<nums.size(); i++){
        arr[(i+k)%n]=nums[i];
    }

  
}