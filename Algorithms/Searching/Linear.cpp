#include <iostream>

using namespace std;

int LinearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    //Khởi tạo mảng 
    int arr[100];
    // Khởi tạo số phần tử của mảng
    int n;
    cin >> n;
    //Nhập số phần tử của mảng
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Nhập giá trị tìm kiếm
    int x;
    cin >> x;
    // Hàm tìm kiếm tuyến tính
    int result = LinearSearch(arr, n, x);
    cout << result << endl;
    return 0;
}
