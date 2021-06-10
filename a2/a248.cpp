/*新手訓練 ~ 陣列應用*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double rounding(double num, int x)
{
    if (x >= 0)
    {
        int m;
        x += 1;
        m = pow(10, x);
        num = num/x;
    }
    return num;
}

int main()
{

    double a, b, result;

    int N;
    while(cin >> a >> b >> N){
    result = a / b;
    cout << fixed <<setprecision(N) <<result<<endl;
    }
}