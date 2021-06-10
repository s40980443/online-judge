
/*兩光法師占卜術*/
#include <iostream>

using namespace std;

int main()
{
    int Month,Day,S;

    cin >> Month >>Day;

    S=(Month*2+Day)%3;
    switch(S)
    {
        case 0:
            cout << "普通" <<endl;
            break;
        case 1:
            cout << "吉" << endl;
            break;
        case 2:
            cout << "大吉" << endl;
            break;
    }

    return 0;
    
}