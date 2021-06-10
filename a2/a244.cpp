/*新手訓練 ~ for + if*/

#include <iostream>
using namespace std;
int main(){
    int n ;//有幾行數字
    
    while(cin >>n){
        long long int a , b,c;

        for(int i = 0 ; i< n;i++){
            cin >> a >>  b >> c;
            if(a == 1){
                cout << (b+c) <<endl;
            }
            if(a ==2 ){
                 cout << (b-c) <<endl;
            }
            if(a ==3 ){
                 cout << (b*c) <<endl;
            }
            if(a == 4 ){
                 cout << (b/c) <<endl;
            }
        }
        
    }
}