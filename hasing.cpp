#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,2,2,2,1,3,3,3,4,0};
    int n=arr.size();
    int hash[n-1]={0};
    
    for(int i=0; i<arr.size(); i++){
       hash[arr[i]]++;
    }

    int q=5;
    while(q--){
        cout<< q<<"->"<<hash[q]<<endl;
    }


}
