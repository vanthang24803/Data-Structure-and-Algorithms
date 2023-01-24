#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
	for (int i = n-1; i >= 1; i--){
		for (int j = 0; j < i; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
} 
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}

