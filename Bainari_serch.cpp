#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int j = arr.size()-1;
    int target = 15;

    while (i < j)
    {
        int med = (i + j )/ 2;
        if (arr[med] < target)
        {
            i = med + 1;
        }
        else if (arr[med] > target)
        {
            j = med - 1;
        }
        else if (arr[med] == target)
        {
            cout << arr[med];
            break;
        }
        
    }
  
    cout << -1;
}