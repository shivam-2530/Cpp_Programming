// #include <iostream>
// using namespace std;

// int main()
// {
//     float n;
//     cout<<"enter a no "<<endl;
//     cin>>n;
//     int x=n;
//     n=n-x;
//     if (n>=0.5)
//     {
//         cout<<"output is "<< x+1;
//     }
//     else
//     {
//         cout<<x;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

class area
{
    public:
    area(float r)
    {
        cout<<"area of circle = "<<3.14*r*r<<endl;
    }
    area(float l, float b)
    {
        cout<<"area of rectangle = "<<l*b<<endl;
    }
};
int main()
{
    float l,b,r;
    cout<<"Enter radius"<<endl;
    cin>>r;
    area a1(r);
    cout<<"Enter length ,breath"<<endl;
    cin>>l>>b;
    area a2(l,b);
    return 0;
}