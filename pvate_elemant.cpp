#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 5, 10};

    int first, second;

    first = arr[0];
    second = -1;

    for (int i = 0; i < arr.size(); i++)
    {

        if (first < arr[i])
        {

            second = first;

            first = arr[i];
        }
        else if (first > arr[i] && arr[i]  > second)
        {
            second = arr[i];
        }
    }
    cout<< second;
}