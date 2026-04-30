// wap read one integer and one float no and find the sum using function with return with arguments.
// #include <iostream>
// using namespace std;
// float sum(int a, float b)
// {
//     return a+b;
// }
// int main()
// {
//     int a;
//     float b;
//     cout<<"enter one integer no one float no"<<endl;
//     cin>>a>>b;
//     cout<<"sum is "<<sum(a,b);
//     return 0;
// }

// wap read one no and find the factorial.
#include <iostream>
using namespace std;
int facto(int n, int f=1)
{
    for (int i = 1; i <=n; i++)
    {
     f=f*i;
    }
     return f;
}
int main()
{
    int n,f=1;
    cout<<"enter a no"<<endl;
    cin>>n;
    cout<<"factorial = "<< facto(n,f);
    return 0;
}