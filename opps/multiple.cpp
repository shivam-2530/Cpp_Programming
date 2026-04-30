// wap read one no and find the factorial then read a no of any digits and count how many digits it has.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a,i,f=1;
//     void input()
//     {
//         cout<<"enter one number"<<endl;
//         cin>>a;
//     }
// };
// class B
// {
//     public:
//     int j=0,n;
//     void input2 ()
//     {
//         cout<<"enter one no"<<endl;
//         cin>>n;
//     }
// };
// class C : public B, public A
// {
//     public:
//     void fact()
//     {
//         for ( i = 1; i <= a; i++)
//         {
//             f=f*i;
//         }
//         cout<<"factorial ="<<f<<endl;
//     }
//     void digits()
//     {
//         while (n!=0)
//         {
//             n=n/10;
//             j++;
//         }
//         cout<<"digits of your number is = "<<j<<endl;
//     }
// };
// int main()
// {
//     class C obj;
//     obj.input();
//     obj.fact();
//     obj.input2();
//     obj.digits();
//     return 0;
// }


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