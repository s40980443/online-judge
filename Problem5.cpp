


/*
問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

輸入說明：
輸入一個整數，介於-128～127之間。

輸出說明：
以8位元的二進制顯示。


*/


#include <iostream>
using namespace std;
int main(){
    int num; //輸入數字
    int arr[100];
    int count = 0 ;
    cin >> num;
    for (int i = 0 ; i< num ; i++){
        arr[i] = num%2;
        num  = num/2;
        count++;
    }

    for(int i = count; i>count-1  ;i--){
        cout << arr[i];
    }


    return 0;
}