/*Sagit's 計分程式*/

#include <iostream>
using namespace std;
int main()
{

    int number = 0;

    while (cin >> number)
    {
        if (number >= 0 && number <= 10)
        {
            cout << number * 6 << endl;
        }
        else if (number > 10 && number <= 20)
        {
            cout << 60 + ((number - 10) * 2) << endl;
        }
        else if (number > 21 && number < 40)
        {
            cout << 80 + (number - 20) << endl;
        }
        else
        {
            cout << "100" << endl;
        }
    }
}