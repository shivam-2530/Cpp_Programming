// #include <iostream>
// using namespace std;
// void circle()
// {
//     float r;
//     cout<<"enter radius of circle"<<endl;
//     cin>>r;
//     if (r>0)
//     {
//         cout<<"Area = "<<3.14*r*r<<endl;
//     }
//     else
//     {
//         throw(r);
//     }
// }
// int main()
// {
//     try
//     {
//         circle();
//     }
//     catch(float x)
//     {
//         cout<<"exception"<<x<<endl;
//     }
//     return 0;
// }

// wap read one number and find the factorial.
#include <iostream>
using namespace std;
void fact()
{
    int n,i,f=1;
    cout<<"enter one number"<<endl;
    cin>>n;
    if(n>0)
    {
    for ( i = 1; i <= n; i++)
    {
        f=f*i;
    }
    cout<<f;
    }
    else
    {
    throw(n);
    }
}
int main()
{
    try
    {
        fact();
    }
    catch (int t)
    {
        cout<<"exception "<<t<<endl;
    }
    return 0;
}