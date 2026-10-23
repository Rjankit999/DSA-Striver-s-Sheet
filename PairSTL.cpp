#include <iostream>
#include <vector>
#include<typeinfo>
using namespace std;

int main()
{
//     pair<int, int> p = {5, 10};
//     cout << p.first << endl
//          << p.second;

//     pair<int, pair<int, int>> p = {1, {2, 3}};
//     cout << p.first << endl
//          << p.second.first << endl
//          << p.second.second;

//     vector<int> v(5);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }

//     cout << "Array ";
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
// 

auto a="123";
cout<<typeid(a).name();


    vector<int> v(5,55);
  for(int i:v){
    cout<<i;
  }

}