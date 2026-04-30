// wap read teo numbers and concontinent using single inheritance.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a,b;
//     void input()
//     {
//         cout<<"enter two number:-"<<endl;
//         cin>>a>>b;
//     }
// };
// class B : public A
// {
//     public:
//     void cont()
//     {
//         cout<<"conct = "<<a*10+b;
//     }
// };
// int main()
// {
//     class B obj;
//     obj.input();
//     obj.cont();  
//     return 0;
// }

// wap read two no and find the greater using single inheritance.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a,b;
//     void input()
//     {
//         cout<<"enter two  no"<<endl;
//         cin>>a>>b;
//     }
// };
// class B : public A
// {
//     public:
//     void gret()
//     {
//     if (b>a)
//     a=b;
//     cout<<"greater no is "<<a;
//     }
// };
// int main()
// {
//     class B obj;
//     obj.input();
//     obj.gret();
//     return 0;
// }


// wap read three no and swap using single inheritance.
#include <iostream>
using namespace std;
class A
{
    public:
    int a,b,c,d;
    void input()
    {
        cout<<"enter three no"<<endl;
        cin>>a>>b>>c;
    }
};
class B : public A
{
    public:
    void swap()
    {
        d=a;
        a=b;
        b=c;
        c=d;
        cout<<"afer swap"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};
int main()
{
    class B obj;
    obj.input();
    obj.swap();
    return 0;
}