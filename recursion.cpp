// wap read one numberand find the factorial using recursion
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter one number"<<endl;
    cin>>n;
    cout<<"factorial = "<<fact(n)<<endl;
    return 0;
}