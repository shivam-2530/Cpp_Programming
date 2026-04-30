// wap read two no and find the sum.
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     int sum(int a, int b)
//     {
//         return a+b;
//     }
//     int sum (int a, int b, int c)
//     {
//         return a+b+c;
//     }
// };
// int main()
// {
//     class abc obj;
//     int a,b,c;
//     cout<<"enter two no"<<endl;
//     cin>>a>>b;
//     cout<<"sum is =" <<obj.sum(a,b)<<endl;
//     cout<<"enter three no"<<endl;
//     cin>>a>>b>>c;
//     cout<<"sum is =" <<obj.sum(a,b,c)<<endl;
//     return 0;
// }

// wap read two and find the greater then read three no and find the greater using method overlaoding.
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     int great(int a, int b)
//     {
//         if (b>a)
//         a=b;
//         return a;
//     }
//     int great (int a, int b, int c)
//     {
//         if (b>a)
//         {
//         a=b;
//         return a;
//         }
//         if (c>a)
//         {
//         a=c;
//         return a;
//         }
//     }
// };
// int main()
// {
//     class abc obj;
//     int a,b,c;
//     cout<<"enter two no"<<endl;
//     cin>>a>>b;
//     cout<<"sum grater no =" <<obj.great(a,b)<<endl;
//     cout<<"enter three no"<<endl;
//     cin>>a>>b>>c;
//     cout<<"greater no is =" <<obj.great(a,b,c)<<endl;
//     return 0;
// }

// wap read two no and find swap then read three no and fine the swap using method overloading.
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     void swap (int a, int b)
//     {
//        int  c;
//        c=a;
//        a=b;
//        b=c;
//         cout<<"after swapping = "<<endl;
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//     }
//     void swap (int a, int b, int c)
//     {
//         int d;
//         d=a;
//         a=b;
//         b=c;
//         c=d;
//         cout<<"after swapping = "<<endl;
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//         cout<<"c = "<<c<<endl;
//     }
// };
// int main()
// {
//     class abc obj;
//     int a,b,c,d;
//     cout<<"enter two number"<<endl;
//     cin>>a>>b;
//     obj.swap(a,b);
//     cout<<"enter three number"<<endl;
//     cin>>a>>b>>c;
//     obj.swap(a,b,c);
//     return 0;
// }

#include <iostream>

using namespace std;
class A
{
    public:
    void sum(int a, int b)
    {
        cout<<"sum = "<<a+b<<endl;
    }
    void sum(int a, int b , int c)
    {
        cout<<"sum = "<<a+b+c<<endl;
    }
};

int main()
{
    class A obj;
    int a,b,c;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    obj.sum(a,b);
    cout<<"enter three number"<<endl;
    cin>>a>>b>>c;
    obj.sum(a,b,c);
    return 0;
}