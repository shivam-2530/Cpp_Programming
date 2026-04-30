// wap read one number and find the factorialand check that factorial is even or odd the read two numbers then swap then find the greter then read three numbers then find sum and multiply
#include <iostream>
using namespace std;
class A
{
    public:
    int n;
    void input()
    {
        cout<<"enter one number"<<endl;
        cin>>n;
    }
};
class B
{
    public:
    int a,b;
    void input2()
    {
        cout<<"enter two number"<<endl;
        cin>>a>>b;
    }
};
class C
{
    public:
    int x,y,z;
    void input3()
    {
        cout<<"Enter three no"<<endl;
        cin>>x>>y>>z;
    }
};
class D: public A , public C
{
    public:
    int i,f=1;
    void fact()
    {
        for ( i = 1; i <= n; i++)
        {
            f=f*i;
        }
        cout<<"factorial = "<<f<<endl;
    }
};
class E : public B , public A
{
    public:
    int c;
    void swap()
    {
        c=a;
        a=b;
        b=c;
        cout<<"after swap"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
class F : public C , public B
{
    public:
    void sum()
    {
        cout<<"sum is = "<<x+y+z<<endl;
    }
};
class G : public D , public F
{
    public:
    void even()
    {
        if (f%2==0)
        {
            cout<<"even number"<<endl;
        }
        else
        {
            cout<<"odd number"<<endl;;
        }
    }
};
class H: public E , public D
{
    public:
    void gret()
    {
        if (b>a)
        a=b;
        cout<<"greter no "<<a<<endl;
    }
};
class I : public F , public E
{
    public:
    void multi()
    {
        cout<<"multipy = "<<x*y*z<<endl;
    }
};
int main()
{
    G obj;
    H obj1;
    I obj2;
    obj.input();
    obj.fact();
    obj.even();
    obj1.input2();
    obj1.swap();
    obj1.gret();
    obj2.input3();
    obj2.sum();
    obj2.multi();
    return 0;
}

