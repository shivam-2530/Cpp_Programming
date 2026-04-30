// wap read one no and check that no is even or odd then read two numbers and greter using multiple inheritance.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int n;
//     void input()
//     {
//         cout<<"enter one number"<<endl;
//         cin>>n;
//     }
// };
// class B
// {
//     public:
//     int x,y;
//     void input2()
//     {
//         cout<<"enter two number"<<endl;
//         cin>>x>>y;
//     }
// };
// class C : public A , public B
// {
//     public:
//     void evenodd()
//     {
//         if (n%2==0)
//         {
//             cout<<"even number "<<endl;
//         }
//         else
//         {
//             cout<<"odd number "<<endl;
//         }
//     }
//     void gret()
//     {
//         if (y>x)
//         x=y;
//         cout<<"greter no is = "<<x<<endl;
//     }
// };
// int main()
// {
//     class C obj;
//     obj.input();
//     obj.evenodd();
//     obj.input2();
//     obj.gret();
//     return 0;
// }