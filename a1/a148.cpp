/*You Cannot Pass?!*/

#include <iostream>
using namespace std;
int main()
{

    int n; //考了幾筆題目
    int total ;
    int score;

    while (cin >> n)
    {
        total = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin >> score;
            total = total + score;
        }
    
        // total = total / n;

        if (total > n * 59)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}