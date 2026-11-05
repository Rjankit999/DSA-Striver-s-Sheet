#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={1,2,30,4,5,6};
    int min=INT_MIN;
    int first;
    int second;

    for(int i=0; i<nums.size()-1; i++){
       if(min<nums[i]){
        first=nums[i];
       }
    }
    cout<<first;
    
}