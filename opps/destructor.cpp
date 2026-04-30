// wap read two no and find the sum using constructor and distructor.
// #include <iostream>
// using namespace std;
// class sum
// {
//     public:
//     int a,b;
//     sum()
//     {
//         cout<<"enter two no"<<endl;
//         cin>>a>>b;
//     }
//     ~sum()
//     {
//         cout<<"sum = "<<a+b;
//     }
// };
// int main()
// {
//     class sum obj;
//     return 0;
// }

// wap read 2 no and find greater using constructor and destructor.
#include <iostream>
using namespace std;
class gret
{
    public:
    int a,b;
    gret()
    {
        cout<<"enter two no"<<endl;
        cin>>a>>b;
    }
    ~gret()
    {
        if (b>a)
        a=b;
        cout<<"greater no is = "<<a;
    }
};
int main()
{
    class gret obj;
    return 0;
}