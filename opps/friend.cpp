// wap read two no and find the sum using friend function.
// #include <iostream>
// using namespace std;
// class my
// {
//     int a,b;
//     friend void sum (my t);
// };
// void sum (my t)
// {
//     cout<<"enter two no"<<endl;
//     cin>>t.a>>t.b;
//     cout<<"sum = "<<t.a+t.b;
// }
// int main()
// {
//     my obj;
//     sum(obj);
//     return 0;
// }

// wap read 3 no and swap using freiend function.
// #include <iostream>
// using namespace std;
// class my
// {
//     int a,b,c,d;
//     friend void swap (my x);
// };
// friend void swap (my x)
// {
//     cout<<"enter three no "<<endl;
//     cin>>x.a>>x.b>>x.c;
//     x.d=x.a;
//     x.a=x.b;
//     x.b=x.c;
//     x.c=x.d;
//     cout<<"after swap"<<endl;
//     cout<<"a ="<<x.a<<endl;
//     cout<<"b ="<<x.b<<endl;
//     cout<<"c ="<<x.c<<endl;
// }
// int main()
// {
//     my obj;
//     swap(obj);
//     return 0;
// }

// wap read one num nad check that no is perfect or not.
// #include <iostream>
// using namespace std;
// class my
// {
//     private:
//     friend void per();
// };
// void per()
// {
//     int n,i,s=0;
//     cout<<"enter one number"<<endl;
//     cin>>n;
//     for ( i = 1; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             s=s+i;
//         }
//     }
//     if (s==n)
//     {
//         cout<<"perfect no "<<endl;
//     }
//     else
//     {
//         cout<<"not perfect no "<<endl;
//     }
// }
// int main()
// {
//     my obj;
//     per ();
//     return 0;
// }

#include <iostream>
using namespace std;
class my
{
    friend void prime ();
};
void prime ()
{
    int n,i;
    cout<<"enter two number"<<endl;
    cin>>n;
    i=2;
    while (i<=n)
    {
        if (n%i==0)
        {
            break;
        }
        i++;
    }
    if (n==i)
    {
        cout<<"prime no";
    }
    else
    {
        cout<<"not prime no";
    }
}
int main()
{
    class my obj;
    prime ();
    return 0;
}