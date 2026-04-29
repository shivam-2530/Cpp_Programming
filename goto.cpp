// // wap read 2 number and find the sum tile user want
// #include <iostream>
// using namespace std;

// int main()
// {
//     sum:
//     int a,b;
//     char c;
//     cout<<"Enter two number"<<endl;
//     cin>>a>>b;
//     cout<<"sum = "<<a+b<<endl;
//     cout<<"press y for continue"<<endl;
//     cin>>c;
//     if (c=='y')
//     {
//         goto sum;
//     }
//     else
//     {
//         cout<<"thanks";
//     }
//     return 0;
// }

// wap read 2 number and find the multiply tile user want
#include <iostream>
using namespace std;

int main()
{
    mul:
    int b,a;
    char c;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"multiply = "<<a*b<<endl;
    cout<<"press y for continue"<<endl;
    cout<<"press e for exit"<<endl;
    cin>>c;
    if (c=='y')
    {
        goto mul;
    }
    else
    {
        cout<<"thanks";
    }
    return 0;
}