/*
問題描述 ：

假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。

輸入說明 ：

先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。

輸出說明 ：

列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    replace(str.begin(), str.end(), ',', ' '); //將逗號轉換成空格
    stringstream ss(str); //字串轉成整數

    int money,a1, a2, a3;
    int total = 0 ;
    int one =0, five=0 , fifty=0;

    ss >> money >> a1 >> a2 >> a3;

    total =a1 * 15 + a2 * 20 + a3 * 30;
    fifty = (money - total)/50;
    five = ((money -total)%50)/5;
    one = ((money -total)%5)/1;
    
    if((money - total )<0){
        cout << "0" <<endl;
    }else{
    cout << one  << ","<<five << "," <<fifty <<endl;
    }
}