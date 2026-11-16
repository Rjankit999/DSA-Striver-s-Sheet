#include<bits/stdc++.h>

using namespace std;
int main(){

    vector<int> arr={1,2,3,4,5,2,44,2,4,5,4};
    map<int, int> mpp ;

    for(int i=0; i<arr.size(); i++){
        mpp[arr[i]]++;
    }

    vector<int> q ={1,2,3,4,5,6,9,8,7};

    for(int x:q){
        cout<<x<<"->"<<mpp[x]<<endl;
    }


} 