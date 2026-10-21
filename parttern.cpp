#include <iostream>
using namespace std;
void partten1(int n)
{
    int star = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            star = 1;
        else
            star = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << star;
            star = 1 - star;
        }
        cout << endl;
    }
}

void partten2(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i < n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        // star
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void partten3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 0; j <= n * 2 - i * 2; j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void partten4(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            cout << " ";
            count++;
        }
        cout << endl;
    }
}

void partten5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void partten6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void partten7(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void partten8(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = n - 1 - i; j >= 0; j--)
        {
            cout << " ";
        }
        char ch = 'A';
        int brackpoint = (i * 2 + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (brackpoint > j)
                ch++;
            else
                ch--;
        }

        cout << endl;
    }
}

void partten9(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

void partten10(int n)
{
    for (int i = 0; i < n; i++)
    {
        // stare
        for (int j = n - i; j > 0; j--)
        {
            cout << "*" << " ";
        }
        // space
        for (int j = 0; j < i * 2; j++)
        {
            cout << "  ";
        }
        // stare
        for (int j = n - i; j > 0; j--)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // stare
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = n * 2 - i * 2 - 2; j > 0; j--)
        {
            cout << "  ";
        }
        // stare
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void partten11(int n)
{
    for (int i = 0; i < n * 2 - 1; i++)
    {
        if (i > n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            for (int j = n + 1 - i * 2; j > 0; j--)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = n * 2 - i - 3; j > 0; j--)
            {
                cout << "*" ;
            }
            // for (int j = 0; j <= i - 4 * 2 + 1; j++)
            // {
            //     cout << " ";
            // }
            // for (int j = n * 2 - i - 3; j > 0; j--)
            // {
            //     cout << "*";
            // }
            cout << endl;
        }
    }
}

void partten12(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*"<<" ";
            }
            else
            cout<<"  ";
            
        }
        cout<<endl;
    }
}
int main()

{

    partten12(50);
}