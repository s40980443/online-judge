/*迴文*/

#include <iostream>
using namespace std;
int main(){
    string s;
    while (cin >> s){
        int count = 0; //0沒有錯誤 1錯誤
        for(int i=0;i<s.length();i++){
            if(s[i]==s[s.length()-i-1]){
                continue;
            }
            else{
                count++;
                break;
            }
        }
        if(count ==0 ){
            cout << "yes" <<endl;
        }
        else
            cout << "no" <<endl;
    }
    return 0;
}