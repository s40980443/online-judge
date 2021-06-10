
/*解碼器*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pwd;
    int a;
    while (getline(cin,pwd))
    {
        for (int i=0;i<pwd.length();i++)
        {
            cout << char(pwd[i]-7);
        }
        cout << endl << endl;;
    }
    return 0;
    
}