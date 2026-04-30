// wap read one integer one float one character using constructer with arguments
// #include <iostream>
// using namespace std;
// template <class T>
// class A
// {
//     T value;
//     public:
//     A (T n)
//     {
//         value = n;
//     }
//     void show()
//     {
//         cout<<value<<endl;
//     }
// };
// int main()
// {
//     A obj1(5);
//     A obj2(8.6);
//     A obj3('S');
//     obj1.show();
//     obj2.show();
//     obj3.show();
//     return 0;
// }

// method 2

// #include <iostream>
// using namespace std;
// class ABC
// {
//     public:
//     template <class T>
//     ABC (T n)
//     {
//         cout<<"x = "<<n<<endl;
//     }
// };
// int main()
// {
//     int a;
//     float b;
//     char c;
//     cout<<"Enter one int number"<<endl;
//     cin>>a;
//     class ABC obj1(a);  
//     cout<<"Enter one float number"<<endl;
//     cin>>b;
//     class ABC obj2(b); 
//     cout<<"Enter one char number"<<endl;
//     cin>>c;
//     class ABC obj3(c); 
//     return 0;
// }

// wap read one integer one float one character and dispay using function template.
#include <iostream>
using namespace std;
template <class T>
void display(T n)
{
    cout<<"output = "<<n<<endl;
}
int main()
{
    int a;
    float b;
    char c;
    cout<<"enter one int number"<<endl;
    cin>>a;
    display(a);
    cout<<"enter one float"<<endl;
    cin>>b;
    display(b);
    cout<<"enter one charecter number"<<endl;
    cin>>c;
    display(c);
    return 0;
}