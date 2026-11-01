// First and last position of an element in sorted array;
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    pair<int ,int>p;
    int k=8;
    int first=-1; int last=-1;
    vector<int>nums={2,4,6,8,8,8,8,11,13};
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==k){
            if(first <=-1){
                first=i;
            }
            last=i;
        }
    }
    p.first=first; p.second=last;
    cout<<p.first<<","<<p.second;
}

