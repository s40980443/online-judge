
/*最大公因數(GCD)*/

#include <iostream>

using namespace std;

 int gcd(int m, int n){ //輾轉相除
     int t =1 ;
     while(t!=0){
         t = m%n;
        m = n;
        n = t;
     }
     return m;
 }

 int gcd_r(int a,int b){ //遞迴的輾轉相除
    if(a%b == 0){
        return b;
    }else{
        return gcd_r(b,a%b);
    }
 }


int main()
{
    int a,b;
    while(cin>>a>> b){
        cout<< gcd_r(a,b) <<endl;
    }
    return 0;
    
}