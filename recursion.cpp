// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     int f = 1*fact(n - 1);
//     if (n == 0)
//         return 1;
// }
// int main()
// {
//     cout<<fact(5);
// }

// #include <iostream>
// using namespace std;
// void print( int i,int n){

//     cout<<i;
//     if(n==i){
//         return ;
//     }
//     print(i+1,n);
// }

// int  main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     print(1,n);
// }

// #include <iostream>
// using namespace std;
// void print( int i,int n){

//     cout<<n;
//     if(n==i){
//         return ;
//     }
//     print(i,n-1);
// }

// int  main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     print(1,n);
// }

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return fact(n) * fact(n - 1);
}

int main()
{
    int n = 5;
    cout << fact(n);
}