/*
 * @Author: your name
 * @Date: 2021-06-04 00:35:59
 * @LastEditTime: 2021-06-04 10:42:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/a044.cpp
 */
/*
 * @Author: your name
 * @Date: 2021-06-03 16:37:06
 * @LastEditTime: 2021-06-04 00:35:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C/a038.cpp
 */
/*空間切割*/
#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    unsigned int n;

    while (cin >> n)
    {
        n = (pow(n, 3) - n) / 6 + n + 1;
        cout
            << n << endl;
    }
    return 0;
}