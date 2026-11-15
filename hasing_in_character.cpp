#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcdebcd";
    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    string q="abcd";
    
    for(int i=0; i<q.size(); i++){
        // cout<<q[i]<<endl;
        cout << q[i]<<"->"<< hash[q[i]-'a']<<endl;
    }


    
}