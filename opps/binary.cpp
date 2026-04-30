// wap read two number using object 1 then read two no using object 2 and sum the .
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a,b;
//     void input()
//     {
//         cout<<"enter two number"<<endl;
//         cin>>a>>b;
//     }
//     A operator + (A T)
//     {
//         A x;
//         x.a=a+T.a;
//         x.b=a+T.b;
//         return x;
//     }
//     void show ()
//     {
//         cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
//     }
// };
// int main()
// {
//     A obj1,obj2,obj3;
//     obj1.input();
//     obj2.input();
//     cout<<"Before calling operator "<<endl;
//     cout<<"value of obj1"<<endl;
//     obj1.show();
//     cout<<"value of obj2"<<endl;
//     obj2.show();
//     obj3=obj1+obj2;
//     cout<<"After calling operator"<<endl;
//     obj3.show();
//     return 0;
// }

// wap read two number using object 1 then read two no using object 2 and multiply the object 1 and 2

#include <iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void input()
    {
        cout<<"enter two number"<<endl;
        cin>>a>>b;
    }
    A operator *(A S)
    {
        A x;
        x.a = a*S.a;
        x.b = b*S.b;
        return x;
    }
    void show()
    {
        cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    }
};
int main()
{
    class A obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    cout<<"Before calling operator"<<endl;
    cout<<"value of obj-1"<<endl;
    obj1.show();
    cout<<"value of obj-2"<<endl;
    obj2.show();
    obj3=obj1*obj2;
    cout<<"After calling operator"<<endl;
    obj3.show();
    return 0;
}