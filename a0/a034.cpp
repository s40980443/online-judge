/*
 * @Author: your name
 * @Date: 2021-06-04 10:36:27
 * @LastEditTime: 2021-06-04 14:10:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/a034.cpp
 * 二進位制轉換
 */

#include <iostream>
using namespace std;
int main()
{
    int n; //輸入要換算的數
    int arr[100];

    cin >> n;
    if (n / 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = n % 2;
            n /=2 ;
        }
    }
    for(int j=n;j>n;j--)
    cout << arr[j] <<endl;
    cout << endl;
}