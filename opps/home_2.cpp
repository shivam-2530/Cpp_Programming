// wap read two no and find the sum then read three no and find the sum.
#include <iostream>
using namespace std;
void sum (int a,int b)
{
    cout<<"sum ="<<a+b;
}
void sum (int a, int b, int c)
{
    cout<<"sum ="<<a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"enter two no"<<endl;
    cin>>a>>b;
    sum(a,b);
    cout<<endl;
    cout<<"enter three number:-"<<endl;
    cin>>a>>b>>c;
    sum(a,b,c);
    return 0;
} 