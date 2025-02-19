#include <bits/stdc++.h>
using namespace std;

int Searchinsert(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    int k = 9;
    int lower = Searchinsert(arr, k);
    cout << lower;
}