// wap read one number and increse or decrese the value using prefix unary operator overloading.

// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a;
//     void value()
//     {
//         cout<<"enter one number"<<endl;
//         cin>>a;
//     }
//     void operator ++ ()
//     {
//         a++;
//     }
//     void show ()
//     {
//         cout<<"output = "<<a<<endl;
//     }
//     void operator -- ()
//     {
//         a--;
//     }
// };
// int main()
// {
//     class A obj;
//     obj.value();
//     cout<<"before calling ++ operator"<<endl;
//     obj.show();
//     cout<<"After calling ++ operator"<<endl;
//     ++obj;
//     obj.show();
//     cout<<"After calling -- operator"<<endl;
//     --obj;
//     obj.show();
//     return 0;
// }

// wap read one no and increase or descrese the value using opstfix unary operator overloading.

#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    void value()
    {
        cout<<"enter one number"<<endl;
        cin>>a;
    }
    void operator ++ ()
    {
        a++;
    }
    void show ()
    {
        cout<<"output = "<<a<<endl;
    }
    void operator -- ()
    {
        a--;
    }
};
int main()
{
    class A obj;
    obj.value();
    cout<<"before calling ++ operator"<<endl;
    obj.show();
    cout<<"After calling ++ operator"<<endl;
    obj.operator++ ();
    obj.show();
    cout<<"After calling -- operator"<<endl;
    obj.operator--();
    obj.show();
    return 0;
}

