// no return no arguments
// #include <iostream>
// using namespace std;
// void sum()
// {
//     int a,b;
//     cout<<"enter two no\n"<<endl;
//     cin>>a>>b;
//     cout<<"sum = "<<a+b;
// }
// int main()
// {
//     sum();
//     return 0;
// }

// wap read two no and swap.
// #include <iostream>
// using namespace std;
// void swap()
// {
//     int a,b,c;
//     cout<<"enter two no\n";
//     cin>>a>>b;
//     cout<<"before swap"<<endl;
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
//     c=a;
//     a=b;;
//     b=c;
//     cout<<"after swap"<<endl;
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
// }
// int main()
// {
//     swap();
//     return 0;
// }

// wap find the simple intrest and find the area of circle using userdefine function no return no argumrnts.
// #include <iostream>
// using namespace std;
// void si()
// {
//     float p,r,t,si;
//     cout<<"Enter princple / rate /time"<<endl;
//     cin>>p>>r>>t;
//     si=(p*r*t)/100;
//     cout<<"si ="<<si<<endl;
// }
// void circle()
// {
//     cout<<endl;
//     cout<<"now find area of circle"<<endl;
//     float r;
//     cout<<"enter radius"<<endl;
//     cin>>r;
//     cout<<"area of circle ="<<3.14*r*r;
// }
// int main()
// {
//     si();
//     circle();
//     return 0;
// }

// no return with arguments
// wap read 2 no and find the sum using 
// #include <iostream>
// using namespace std;
// void sum(int a, int b)
// {
//     cout<<"sum ="<<a+b;
// }
// int main()
// {
//     int a,b;
//     cout<<"enter two no"<<endl;
//     cin>>a>>b;
//     sum(a,b);
//     return 0;
// }


// wap read PRICE of any items and dispay the rate after 25% discount.
// #include <iostream>
// using namespace std;
// void discount(int a)
// {
//     cout<<"25 '%' discount ="<<a*25/100;
// }
// int main()
// {
//     int a;
//     cout<<"enter price of any product"<<endl;
//     cin>>a;
//     discount(a);
//     return 0;
// }

#include <iostream>
using namespace std;
void mul(int x, int y, int z)
{
    cout<<"multiply = "<<x*y*z<<endl;
}
int main()
{
    int a,b,c;
    cout<<"enter two num"<<endl;
    cin>>a>>b>>c;
    mul(a,b,c);re
    return 0;
}