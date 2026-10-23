#include<iostream>

using namespace std;


int main(){
// pair<int ,int> p={5,10};
// cout<<p.first<<endl<<p.second;

pair<int , pair<int , int> > p={1,{2,3}};
cout<<p.first<<endl<<p.second.first<<endl<<p.second.second;

}