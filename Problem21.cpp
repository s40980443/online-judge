/*
問題描述 ：

寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。

輸入說明 ：

輸入十個數字，以空白間隔。

輸出說明 ：

輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。

*/

#include <iostream>
#include <iomanip>
float Max(float n[]);
float Min(float n[]);

using namespace std;
int main()
{

    float n[10];

    for (int i = 0; i < 10; i++)
    {
        n[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }

    cout << fixed<< setprecision(2) << "maximum:"<< Max(n) << endl;
    cout << fixed<< setprecision(2) <<"minimum:" << Min(n) << endl;


    return 0;
}

float Max(float n[])
{
    float  Max = n[0];
    for (int i = 1; i < 10; i++)
    {
        if (n[i] > Max)
        {
            Max = n[i];
        }
    }
    return Max;
}

float Min(float n[])
{
    float Min = n[0];
    for (int i = 1; i < 10; i++)
    {
        if (n[i] < Min)
        {
            Min = n[i];
        }
    }
    return Min;
}