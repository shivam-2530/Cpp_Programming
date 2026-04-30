#include <iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void input()
    {
        cout<<"enter two no"<<endl;
        cin>>a>>b;
    }
};
class B: public A
{
    public:
    void swap()
    {
        a=a+b;
        b=a-b;
        a=a-b;
        cout << "after swap" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
class C :public A
{
    public:
    void greater()
    {
        if (a>b)
        {
            cout<<"greater no is = "<<a<<endl;
        }
        else
        {
            cout<<"greater no is = "<<b<<endl;
        }
    }
};
class D: public A
{
    public:
    void mul()
    {
        cout<<"multiply is = "<<a*b<<endl;
    }
};
int main()
{
    class B obj;
    obj.input();
    obj.swap();
    class C obj1;
    obj1.input();
    obj1.greater();
    class D obj2;
    obj2.input();
    obj2.mul();
    return 0;
}