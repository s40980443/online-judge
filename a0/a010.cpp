/*因數分解*/
#include <iostream>

using namespace std;

int main(void) {
    int n; //輸入數字
    bool status = true;
    while(cin >> n){
        int count = 0; //計算次方
        for(int i = 2 ; i<=n ;i++){
            while(n%i == 0){
                n = n/i;
                count += 1;
            }
                    if(n == 1){
                        if(count == 1)
                            cout << i;
                        else
                            cout << i << "^" << count;
                    }
                    else if(count >2)
                        cout << i << "^" << count;
                    else if (count == 1)
                        cout << n << "*"; 
                        
                    
        }
    }
    return 0;
}

