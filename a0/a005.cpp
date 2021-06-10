
/*Eva 的回家作業*/
#include <iostream>

using namespace std;

int main()
{
   int t;
   cin >> t;
   if(t>0 && t<=20)
   {
        for (int i = 0 ; i<t ; i++)
        {
            int a,b,c,d,e;
            cin >> a >>b >> c >> d ;
            if(b-a == d-c) //如果是等差數列
            {
                e = d+b-a;
            }
            else if((d/c) == (b/a))
            {
                e = d*(d/c);
            }
            cout << a << " " << b << " " << c << " " << d  << " " << e <<endl;
        }
   }
    return 0;
    
}