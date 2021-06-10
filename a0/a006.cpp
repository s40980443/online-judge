
/*一元二次方程式*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a,b,c,x,ans;

   cin >> a >> b >>c;

   x = pow(b,2)-(4*a*c);

   if( x > 0 ){

       int x1 = ((-b)+sqrt(x))/(2*a);
       int x2 = ((-b)-sqrt(x))/(2*a);
       cout << "Two different roots x1=" << x1 
            << " , x2=" << x2 <<endl;;
   }
    else if(x < 0)
    {
        cout << "No real root" <<endl;
    }
    else
    {
        cout << "Two same roots x=" << (-b)/(2*a) << endl;
    }
    return 0;
    
}