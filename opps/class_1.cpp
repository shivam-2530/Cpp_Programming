// wap read one integer and one float number and find the sum using function with return no argument 
// #include <iostream>
// using namespace std;
// float sum()
// {
//     int a;
//     float b;
//     cout<<"enter one integer no and 1 float no:-"<<endl;
//     cin>>a>>b;
//     return a+b;
// }
// int main()
// {
//     float s;
//     s=sum();
//     cout<<"sum is ="<<s;
//     return 0;
// }


// wap read two no and find the greater using function with return no arguments.
// #include <iostream>
// using namespace std;
// int great()
// {
//     int a,b;
//     cout<<"enter two no"<<endl;
//     cin>>a>>b;
//     if (b>a)
//     a=b;    
//     return a;
    
// }
// int main()
// {
//     int g;
//     g= great();
//     cout<<"greater no is ="<<g;
//     return 0;
// }


// wap read three no and find the greatest.
#include <iostream>
using namespace std;
int great()
{
    int a,b,c;
    cout<<"enter three number:-"<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    int g;
    g=great();
    cout<<"greater no is = "<<g;   
    return 0;
}