#include <iostream>

using namespace std;

void selectionShort(int arr[], int n)
{
    int indexMin;
    for (int i = 0; i < n - 1; i++)
    {
        indexMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexMin])
            {
                indexMin = j;
            }
        }
        if (i != indexMin)
        {
            int temp = arr[i];
            arr[i] = arr[indexMin];
            arr[indexMin] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    selectionShort(arr, n);
    printArray(arr, n);
    return 0;
}
