#include <iostream>

using namespace std;

int main(){
    // Khởi tạo Mảng 
    int arr[100];
    // Nhập vào số phần tử của mảng
    int n;
    cin >> n;
    // Nhập mảng
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // In mảng
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }

    return 0;
}