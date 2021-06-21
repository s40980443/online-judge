/*
問題描述：

星座查詢有 " 水瓶 "," 雙魚 "," 牡羊 "," 金牛 " ," 雙子 "," 巨蟹 "," 獅子 "," 處女 " ," 天秤 "," 天蠍 "," 射手 "," 摩羯 "; 請設計程式，根據輸入之月及日期，輸出對應之星座輸出。

1997 年 1 月 21 日 1997 年 2 月 18 日 水瓶

1997 年 2 月 19 日 1997 年 3 月 20 日 雙魚

1997 年 3 月 21 日 1997 年 4 月 20 日 牡羊

1997 年 4 月 21 日 1997 年 5 月 21 日 金牛

1997 年 5 月 22 日 1997 年 6 月 21 日 雙子

1997 年 6 月 22 日 1997 年 7 月 22 日 巨蟹

1997 年 7 月 23 日 1997 年 8 月 23 日 獅子

1997 年 8 月 24 日 1997 年 9 月 23 日 處女

1997 年 9 月 24 日 1997 年 10 月 23 日 天秤

1997 年 10 月 24 日 1997 年 11 月 22 日 天蠍

1997 年 11 月 23 日 1997 年 12 月 21 日 射手

1997 年 12 月 22 日 1998 年 1 月 20 日 摩羯

Aquarius 水瓶座 Leo 獅子座

Pisces 雙魚座 Virgo 處女座 Aries 牡羊座 Libra 天秤座 Taurus 金牛座 Scorpio 天蠍座 Gemini 雙子座 Sagittarius 射手座 Cancer 巨蟹座 Capricorn 摩羯座
輸入說明：

請輸入月及日期。

輸出說明：

依照星座標準，將月及日期轉成星座輸出。

*/

#include <iostream>
using namespace std;
int main()
{
    int month, day;
    string star[12] = {"Aquarius", "Pisces", "Aries",
                       "Taurus", "Gemini", "Cancer",
                       "Leo", "Virgo", "Libra",
                       "Scorpio", "Sagittarius", "Capricorn"};

    cin >> month >> day;
    switch (month)
    {
    case 1:
        if (day >= 21)
        {
            cout << star[0] << endl;
        }
        if (day <= 20)
        {
            cout << star[11] << endl;
        }
        break;

    case 2:
        if (day <= 18)
        {
            cout << star[0] << endl;
        }
        if (day >= 19)
        {
            cout << star[1] << endl;
        }
        break;
    case 3:
        if (day <= 20)
        {
            cout << star[1] << endl;
        }
        if (day >= 21)
        {
            cout << star[2] << endl;
        }
        break;
    case 4:
        if (day <= 20)
        {
            cout << star[2] << endl;
        }
        if (day >= 21)
        {
            cout << star[3] << endl;
        }
        break;
    case 5:
        if (day <= 21)
        {
            cout << star[3] << endl;
        }
        if (day >= 22)
        {
            cout << star[4] << endl;
        }
        break;
    case 6:
        if (day <= 21)
        {
            cout << star[4] << endl;
        }
        if (day >= 22)
        {
            cout << star[5] << endl;
        }
        break;
    case 7:
        if (day <= 22)
        {
            cout << star[5] << endl;
        }
        if (day >= 23)
        {
            cout << star[6] << endl;
        }
        break;
    case 8:
        if (day <= 23)
        {
            cout << star[6] << endl;
        }
        if (day >= 24)
        {
            cout << star[7] << endl;
        }
        break;
    case 9:
        if (day <= 23)
        {
            cout << star[7] << endl;
        }
        if (day >= 24)
        {
            cout << star[8] << endl;
        }
        break;
    case 10:
        if (day <= 23)
        {
            cout << star[8] << endl;
        }
        if (day >= 24)
        {
            cout << star[9] << endl;
        }
        break;
    case 11:
        if (day <= 22)
        {
            cout << star[9] << endl;
        }
        if (day >= 23)
        {
            cout << star[10] << endl;
        }
        break;
    case 12:
        if (day <= 21)
        {
            cout << star[10] << endl;
        }
        if (day >= 22)
        {
            cout << star[11] << endl;
        }
    }
}
