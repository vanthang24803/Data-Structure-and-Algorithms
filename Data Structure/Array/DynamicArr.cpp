#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Khởi tạo số phần tử mảng
    int n ;
    cin >>n;
    // Khởi tạo mảng động
    int *arr = new int[n];
    // Nhập Mảng
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // In mảng
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
