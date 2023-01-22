#include <iostream>

using namespace std;

int BinarySearch(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    if (arr[l] == x)
    {
        return l;
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int result = BinarySearch(arr, n, x);
    cout << result;
    return 0;
}
