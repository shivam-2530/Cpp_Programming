// wap read two number and find the sum then read one number and find the factorial then read one no and check that even odd

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
// };
// class B : public A
// {
//     public:
//     int n,i,f=1;
//     void input2()
//     {
//         cout<<"enter one number"<<endl;
//         cin>>n;
//     }
// };
// class C
// {
//     public:
//     int x;
//     void input3 ()
//     {
//         cout<<"enter one number"<<endl;
//         cin>>x;
//     }
// };
// class D :public B , public C
// {
//     public:
//     void sum()
//     {
//         cout<<"sum = "<<a+b<<endl;
//     }
//     void fact()
//     {
//         for ( i = 1; i <= n; i++)
//         {
//             f=f*i;
//         };
//         cout<<"factorial = "<<f<<endl;
//     }
//     void even()
//     {
//         if (x%2==0)
//         {
//             cout<<"even number"<<endl;
//         }
//         else
//         {
//             cout<<"odd number"<<endl;
//         }
//     }
// };
// int main()
// {
//     class D obj;
//     obj.input();
//     obj.sum();
//     obj.input2();
//     obj.fact();
//     obj.input3();
//     obj.even();
//     return 0;
// }

// wap read a number of any didgit and count total number of digits then read three numbers and swap then read one no and check that no negative or postive.

#include <iostream>
using namespace std;
class A
{
public:
    int n, i = 0;
    void input1()
    {
        cout << "enter one number of any digits" << endl;
        cin >> n;
    }
};
class B : public A
{
public:
    int a, b, c;
    void input2()
    {
        cout << "enter three number" << endl;
        cin >> a >> b >> c;
    }
};
class C
{
public:
    int x;
    void input3()
    {
        cout << "enter one number" << endl;
        cin >> x;
    }
};
class D : public B, public C
{
public:
    void digit()
    {
        while (n != 0)
        {
            n = n / 10;
            i++;
        }
        cout << "your selected no = " << i << endl;
    }
    void swap()
    {
        a = a + b + c;
        b = a - (b + c);
        c = a - (b + c);
        a = a - (b + c);
        cout << "after swap" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
    void nepo()
    {
        if (x > 0)
        {
            cout << "postive number" << endl;
        }
        else if (x == 0)
        {
            cout << "nutral no" << endl;
        }
        else
        {
            cout << "negative no" << endl;
        }
    }
};
int main()
{
    class D obj;
    obj.input1();
    obj.digit();
    obj.input2();
    obj.swap();
    obj.input3();
    obj.nepo();
    return 0;
}