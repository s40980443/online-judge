
/*Print it all*/

/*Input Intro
輸入為一個整數 n，其中 n 不大於 10000。
若 n = 0 表示資料結束。
*/

/*Output Intro
輸出如前述，各個數字之間以一個空白隔開。
*/

#include <iostream>
using namespace std;

int main()
{
    int n; //輸入數字
    int num[100] = {};
    while (cin >> n)
    {
        int i = 0;
        for (int j = 1;j < n; j++)
        {
            if (j%7!= 0 )
            {
                cout << j << " ";
            }
        }
        cout << endl;
        if(n == 0)
                break;
    }
}