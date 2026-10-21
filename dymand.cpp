#include <iostream>
using namespace std;
int main()
{

    // for (int  i = 0; i < row; i++)
    // {
    //   //space
    //     for(int j=0; j<row-i-1;j++){
    //         cout<<" ";
    //     }
    //   //star
    //   for(int j=0; j<i*2+1; j++){
    //     cout<<"*";
    //   }
    //   //space
    //    for(int j=0; j<row-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     // space
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     // star
    //     for (int j = 0; j < row*2 - (2*i+1) ; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     cout << endl;
    // }
    int n = 5;

    // for(int i=0; i<n; i++){
    //     for(int j=0; n/2-i>=j; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<=i*2; j++){
    //         cout<<"*";
    //     }
    //       for(int j=0; n/2-i>=j; j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<6; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; n-i*2>=j; j++){
    //         cout<<"*";
    //     }
    //     for(int j=0; j<=i; j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
 
  for(int i=0; i<=n*2-1; i++){
    int star=i;
    if(i>n)
    star=n*2-i;
    
    for(int j=1; j<=star; j++){
        cout<<"*";

    }
    cout<<endl;
  }
}