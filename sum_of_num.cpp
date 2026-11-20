
#include<bits/stdc++.h>

using namespace std;

void findWays(int n, vector<int>& ans, int original)
{
    if (n == 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (i > 0)
                cout << " + ";

            cout << ans[i];
        }

        cout << " = " << original << endl;
        return;
    }

    for (int i = 1; i <= 3; i++)
    {
        if (i <= n)
        {
            ans.push_back(i);

            findWays(n - i, ans, original);

            ans.pop_back();
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;

    vector<int> ans;

    findWays(n, ans, n);

    return 0;
}
