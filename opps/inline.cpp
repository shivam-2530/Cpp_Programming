// //***Inline***
// wap read teo no and find the sum using inline
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     int a,b;
//     inline void sum()
//     {
//         cout<<"enter two no"<<endl;
//         cin>>a>>b;
//         cout<<"sum is = "<<a+b;
//     }
// };
// int main()
// {
//     class abc obj;
//     obj.sum();
//     return 0;
// }

// //****inline method out side class***
// wap read one no and check that prefect or not using inline outside class.
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     int n,i,s=0;
//     inline void perfect ();
// };
// inline void abc::perfect()
// {
//     cout<<"enter one number"<<endl;
//     cin>>n;
//     for (i=1 ; i< n; i++)
//     {
//         if (n%i==0)
//         {
//             s=s+i;
//         }
//     }
//     if (s==n)
//     {
//         cout<<"pertect num"<<endl;
//     }
//     else
//     {
//         cout<<"not perfect"<<endl;
//     }
// }
// int main()
// {
//     class abc obj;
//     obj.perfect();
//     return 0;
// }

// wap read a no of three digits and check that no is armstrom or not using inline method outside class.
#include <iostream>
using namespace std;
class my
{
    public:
    int n,fd,md,ld;
    inline void armstrone ();
};
inline void my::armstrone ()
{
    cout<<"enter a three digits number"<<endl;
    cin>>n;
    ld=n%10;
    md=(n/10)%10;
    fd=n/100;
    if (n==(ld*ld*ld)+(md*md*md)+(fd*fd*fd))
    {
        cout<<"Number is armstrone"<<endl;
    }
    else
    {
        cout<<"Number is not armstrone"<<endl;
    }
    
}
int main()
{
    class my obj;
    obj.armstrone();
    return 0;
}