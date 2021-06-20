/*
問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

輸入說明：
輸入一正整數。

輸出說明：
輸出總和。

*/

#include <iostream>
using namespace std;
int main()
{

    int n, a[100] = {0};
    while (cin >> n)
    {
        for (int i = 0; i <= n;i++ )
        {
            if (n % 3 == 0)
            {
                a[i] = n;
            }
            n--;
        }

        int total = 0 ;
        for (int i = 0; i <=n;i++ )
        {
            total = a[i]+a[i+1];
        }
     cout << total <<endl;


    }

    return 0;
}