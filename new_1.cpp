#include <iostream>
using namespace std;

int main()
{
    char n;
    cout<<"enter any alphabets"<<endl;
    cin>>n;
    if (n>=65&& n<=90)
    {
        n=n+32;
        cout<<n;
    }
    else
    {
        n=n-32;
        cout<<n;
    }
    return 0;
}