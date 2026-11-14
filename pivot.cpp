#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int> nums={4,5,6,7,1,2,3};
    int piovt=nums[0];
    for(int i=0; i<nums.size(); i++){
        if(piovt<nums[i]){
            piovt=nums[i];
        }
    }
    cout<<piovt;
}