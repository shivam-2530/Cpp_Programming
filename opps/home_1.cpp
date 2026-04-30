#include <iostream>
using namespace std;
int great()
{
    int a,b,c;
    cout<<"enter three number:-"<<endl;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int g;
    g=great();
    cout<<"greater no is = "<<g;
    return 0;
}