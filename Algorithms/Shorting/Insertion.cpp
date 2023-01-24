#include <iostream>

using namespace std;

void insertionShort(int arr[], int n)
{
    int index, value;
    for (int i = 1; i < n; i++)
    {
        index = i;
        value = arr[i];
        while (index > 0 && arr[index - 1] > value)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
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
    insertionShort(arr, n);
    printArray(arr, n);
    return 0;
}
