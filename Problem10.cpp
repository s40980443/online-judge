/*
問題描述：

給定二個正整數，利用輾轉相除法求其最大公因數。

輸入說明：

給定二個正整數

輸出說明：

輸出最大公因數

範例：

假設輸入為 300 與 250, 則輸出為 50

*/


int GCD(int x,int y){
    
    if(y== 0 ){
        return x;
    }
    return GCD(y , x%y);
}


#include <iostream>
using namespace std;
int main(){

    int x,y;
    cin >> x >> y ;
    cout << GCD(x,y) <<endl;

}