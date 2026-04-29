// wap read 2 no and find the greater then read three no and find the grestest  
// #include <iostream>
// using namespace std;
// void gret(int a,int b)
// {
//     if (b>a)
//     a=b;
//     cout<<"greter no ="<<a; 
// }
// void gret(int a,int b,int c)
// {
//     if (a>b)
//     {
//         if (a>c)
//         {
//             cout<<"greter no ="<<a; 
//         }
//         else
//         {
//             cout<<"greter no ="<<c; 
//         }
//     }
//     else
//     {
//         if (b>c)
//         {
//             cout<<"greter no ="<<b; 
//         }
//         else
//         {
//             cout<<"greter no ="<<c; 
//         }
//     }
// }
// int main()
// {
//     int a,b,c;
//     cout<<"enter two no"<<endl;
//     cin>>a>>b;
//     gret(a,b);
//     cout<<endl;
//     cout<<"enter three no"<<endl;
//     cin>>a>>b>>c;
//     gret(a,b,c);
//     return 0;
// }


// 
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void swap(int a,int b,int c)
{
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    cout<<"after swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
int main()
{
    int a,b,c;
    cout<<"enter two no"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"enter three no"<<endl;
    cin>>a>>b>>c;
    swap(a,b,c);
    return 0;
}