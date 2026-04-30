// wap read two and find the sum using method outside class.
// #include <iostream>
// using namespace std;
// class abc
// {
//     int a,b;
//     public:
//     void sum();
// };
// int main()
// {
//     class abc obj;
//     obj.sum();
//     return 0;
// }
// void abc::sum()
// {
//     cout<<"enter two number";
//     cin>>a>>b;
//     cout<<"sum = "<<a+b;
// }

// wap read a two no and swap. using outside class.
// #include <iostream>
// using namespace std;
// class abc
// {
//     int a,b,c;
//     public:
//     void input();
//     void swap();
// };
// int main()
// {
//     class abc obj;
//     obj.input();
//     obj.swap();
//     return 0;
// }
// void abc::input()
// {
//     cout<<"enter two number"<<endl;
//     cin>>a>>b;
// }
// void abc::swap()
// {
//     c=a;
//     a=b;
//     b=c;
//     cout<<"after swap"<<endl;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b;
// }

// w.a.p read two no and find the greater using method using outside class.
// #include <iostream>
// using namespace std;
// class abc
// {
//     int a,b;
//     public:
//     void greater();
// };
// int main()
// {
//     class abc obj;
//     obj.greater();
//     return 0;
// }
// void abc::greater()
// {
//     cout<<"enter two no"<<endl;
//     cin>>a>>b;
//     if (a>b)
//     {
//         cout<<a<<" using greater no"<<endl;
//     }
//     else
//     {
//         cout<<b<<" using greater no"<<endl;
//     }
// }

// wap read one no and find factorial using method outside class.
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     int fact(int, int);
// };
// int main()
// {
//     class abc obj;
//     int a,f=1;
//     cout<<"enter a no"<<endl;
//     cin>>a;
//     cout<<"fatorial is = "<<obj.fact(a,f);
//     return 0;
// }

// int abc:: fact(int a, int f=1)
// {
//     for ( int i = 1; i <= a; i++)
//     {
//         f=f*i;
//     }
//     return f;
// }