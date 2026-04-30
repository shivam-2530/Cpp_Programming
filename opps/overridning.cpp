// wap read two number and find the sum then read two number and find swap the read two no and find greater using virtual keyword or method overriding.

// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a,b;
//     virtual void input()=0;
// };
// class B: public A
// {
//     public:
//     int a,b;
//     void input()
//     {
//         cout<<"enter two number"<<endl;
//        cin>>a>>b;
//     }
//     void sum()
//     {
//         cout<<"sum = "<<a+b<<endl;
//     }
// };
// class C : public B
// {
//     public:
//     int x,y;
//     void input()
//     {
//        cout<<"enter two number"<<endl;
//        cin>>x>>y;
//     }
//     void swap()
//     {
//         x=x+y;
//         y=x-y;
//         x=x-y;
//         cout<<"after swap"<<endl;
//         cout<<"x = "<<x<<endl;
//         cout<<"y = "<<y<<endl;
//     }
// };
// class D: public C
// {
//     public:
//     int p,q;
//     void input()
//     {
//         cout<<"enter two number"<<endl;
//         cin>>p>>q;
//     }
//     void gret()
//     {
//         if (q>p)
//         p=q;
//         cout<<"greater no is "<<p<<endl;
//     }
// };
// int main()
// {
//     class A *obj;
//     class B obj2;
//     class C obj3;
//     class D obj4;
//     obj = &obj2;
//     obj ->input();
//     obj2.sum();
//     obj =&obj3;
//     obj ->input();
//     obj3.swap();
//     obj = &obj4;
//     obj ->input();
//     obj4.gret();
//     return 0;
// }

// wap read two no and find sum then read a no of any digits and reverse.

#include <iostream>
using namespace std;
class A
{
    public:
    virtual void input()=0;
};
class B: public A
{
    public:
    int a,b;
    void input()
    {
        cout<<"enter two number"<<endl;
        cin>>a>>b;
    }
    void sum()
    {
        cout<<"sum = "<<a+b<<endl;
    }
};
class C: public B
{
    public:
    int n,rev=0,x;
    void input()
    {
        cout<<"enter one number of any digits"<<endl;
        cin>>n;
    }
    void reverse()
    {
        while (n>0)
        {
           x=n%10;
           rev=rev*10+x;
           n=n/10; 
        }
        cout<<"reverse = "<<rev<<endl;
    }
};
int main()
{
    class A *obj;
    class B obj1;
    obj = &obj1;
    obj -> input();
    obj1.sum();
    class C obj2;
    obj = &obj2;
    obj -> input();
    obj2.reverse();
    return 0;
}
