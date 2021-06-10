/*排序*/

#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[] , int n){
    for (int i  = 0 ; i< n; i++){
        for(int j  = 0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
void printArray(int arr[], int size){
    for (int i = 0 ; i<size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main()
{
    int arr[1000] = {}; // 輸入數字
    int n ; //輸入數量
    while(cin >> n){
        for(int i = 0 ; i<n ;i++){
            cin >> arr[i];
        }
        bubbleSort(arr,n);
        printArray(arr,n);
    }

    return 0;
}