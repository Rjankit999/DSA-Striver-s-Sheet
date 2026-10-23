#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int rotate(int arr, int size)
    {
        int i = 0;
        int j = size;
        while (i < j)
        {
            int temp = i;
            i = j;
            j = temp;
            i++;
            j++;
        }
    }
    int main()
    {
        vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
        int size = arr.size();
        rotate(arr, size);
    }
}