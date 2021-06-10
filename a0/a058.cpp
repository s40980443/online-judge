
/*MOD3*/

#include<iostream>
using namespace std;
int main(){
    int n ; //輸入數量
    int arr[10];
    int a = 0 , b = 0 , c= 0 ; //當計數

    while(cin >> n){
        for(int i = 0 ; i<n ;i++){
            cin >> arr[i];
        }
        for(int i = 0 ;i<n;i++){
            if(arr[i]%3 == 0){
                a++;
            }
            else if(arr[i]%3 == 1){
                b++;
            }else{
                c++;
            }

        }
        cout << a  << " " << b
            << " " << c << endl;
        break;
    }
}