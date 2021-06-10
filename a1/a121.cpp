/*質數又來囉*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, count;
    while (cin >> a >> b)
    {
        count = 0;
        for(int i = 2; i<b;i++){
            if(a%i==1){
                count++;
            }
            a++;
        }
        

        cout << count << endl;
    }
}
