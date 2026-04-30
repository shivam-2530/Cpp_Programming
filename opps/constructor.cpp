// wap read two no and find sum using costructer.
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     int a,b;
//     abc()
//     {
//         cout<<"enter two no"<<endl;
//         cin>>a>>b;
//         cout<<"sum is = "<<a+b;
//     }
// };
// int main()
// {
//     class abc obj;
//     return 0;
// }

// wap read two and find the greater using constructor.
// #include <iostream>
// using namespace std;
// class great()
// {
//     public:
//     int a,b;
//     great()
//     {
//         cout<<"enter two number"<<endl;
//         cin>>a>>b;
//         if (a>b)
//         {
//             cout<<a<<"greater number"<<endl;
//         }
//         else
//         {
//             cout<<b<<"greater number"<<endl;
//         }
//     }
// };
// int main()
// {
//     class grear obj;
//     return 0;
// }

// wap read two no and swap using constructor.
// #include <iostream>
// using namespace std;
// class swap
// {
//     public:
//     swap()
//     {
//         int a,b,c;
//         cout<<"enter two no"<<endl;
//         cin>>a>>b;
//         c=a;
//         a=b;
//         b=c;
//         cout<<"after swap"<<endl;
//         cout<<"a = "<<a <<endl;
//         cout<<"b = "<<b <<endl;
//     }
// };
// int main()
// {
//     class swap obj;
//     return 0;
// }

// //****parametrized constructor****
// wap read two num and sum using constructor with argumnets
// #include <iostream>
// using namespace std;
// class sum
// {
//     public:
//     sum(int x , int y)
//     {
//         cout<<"sum = "<<x+y;
//     }
// };
// int main()
// {
//     int a,b;
//     cout<<"enter two number"<<endl;
//     cin>>a>>b;
//     class sum obj(a,b);
//     return 0;
// }

// wap read two and find the greater using constructer with arguments.
// #include <iostream>
// using namespace std;
// class gret
// {
//     public:
//     gret(int a, int b)
//     {
//         if (a>b)
//         {
//             cout<<a<<" is the greater"<<endl;
//         }
//         else
//         {
//             cout<<b<<" is the greater"<<endl;
//         }
//     }
// };
// int main()
// {
//     int a,b;
//     cout<<"enter two number"<<endl;
//     cin>>a>>b;
//     class gret obj(a,b);
//     return 0;
// }

// wap read two and swap using parametrized constructor.
// #include <iostream>
// using namespace std;
// class swap
// {
//     public:
//     swap (int a, int b)
//     {
//         int  c;
//         c=a;
//         a=b;
//         b=c;
//         cout<<"after swapping = "<<endl;
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//     }
// };
// int main()
// {
//     int a,b;
//     cout<<"enter two number"<<endl;
//     cin>>a>>b;
//     class swap obj(a,b);
//     return 0;
// }


// //****constructor overloadung ****

// #include<iostream>
// using namespace std;
// class sum
// {
// public:
//    sum(int a, int b)
//    {
//     cout<<a+b<<endl;
//    }
//    sum(int a,int b,int c)
//    {
//     cout<<a+b+c<<endl;
//    }
// };
// int main()
// {
//     int a,b,c;
//     cout<<"Enter two number"<<endl;
//     cin>>a>>b;
//     sum(a,b);
//     cout<<"enter three number"<<endl;
//     cin>>a>>b>>c;
//     sum(a,b,c);
// }


// //****constructor outside class****

// wap read two no and find the sum using constructor outside class
// #include <iostream>
// using namespace std;
// class sum
// {
//     public:
//     sum();
// };
// int main()
// {
//     class sum obj;
//     return 0;
// }
// sum::sum()
// {
//     int a,b;
//     cout<<"enter two no"<<endl;
//     cin>>a>>b;
//     cout<<"sum = "<<a+b;
// }

// wap read one no and find the factorial
// #include <iostream>
// using namespace std;
// class fact
// {
//     public:
//     fact();
// };
// int main()
// {
//     class fact obj;
//     return 0;
// }
// fact::fact()
// {
//     int n,f=1;
//     cout<<"enter two no"<<endl;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         f=f*i;
//     }
//     cout<<"factorial = "<<f;
// }

// wap a program read no of three digits and check that no is palidrom or not.
// #include <iostream>
// using namespace std;
// class pali
// {
//     public:
//     pali();
// };
// int main()
// {
//     class pali obj;
//     return 0;
// }
// pali::pali()
// {
//     int n;
//     cout<<"enter three digits number:-"<<endl;
//     cin>>n;
//     int ld=n%10;
//     int md=(n/10)%10;
//     int fd=n/100;
//     int rev = ld*100+md*10+fd;
//     if (rev==n)
//     {
//         cout<<"palidrom number"<<endl;
//     }
//     else 
//     {
//         cout<<"not palidrom number"<<endl;
//     }
// }

// //****Parametrized outside class****

// wap read two no and find the sum using parametrized outside class
// #include <iostream>
// using namespace std;
// class sum
// {
//     public:
//     sum (int,int);
// };
// int main()
// {
//     int a,b;
//     cout<<"enter two number"<<endl;
//     cin>>a>>b;
//     class sum obj (a,b);
//     return 0;
// }
// sum::sum(int a, int b)
// {
//     cout<<"sum = "<<a+b;
// }

// wap read two no and find the swap using parametrized outside class
// #include <iostream>
// using namespace std;
// class swap
// {
//     public:
//     swap (int , int);
// };
// int main()
// {
//     int a,b;
//     cout<<"enter two no "<<endl;
//     cin>>a>>b;
//     class swap obj (a,b);
//     return 0;
// }
// swap::swap(int a, int b)
// {
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"after swap = "<<endl;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
// }

// //****Constructor overloading outside class***
// wap read 2 no and find the sum read 1 integer and 1 float number.
// #include <iostream>
// using namespace std;
// class sum
// {
//     public:
//     sum();
//     sum(int, float);
// };
// sum::sum(int a , float b)
// {
//     cout<<"sum = "<<a+b;
// }
// int main()
// {
//     int a;
//     float b;
//     cout<<"enter two number one integer and one float"<<endl;
//     cin>>a>>b;
//     class sum obj (a,b);
//     return 0;
// }

// second method
// #include <iostream>
// using namespace std;
// class sum
// {
//     public:
//     sum (int, int);
//     sum (int, float);
// };
// sum::sum(int a, int b)
// {
//     cout<<"sum = "<<a+b;
// }
// sum::sum(int a, float c)
// {
//     cout<<"sum = "<<a+c;
// }
// int main()
// {
//     int a,b;
//     float c;
//     cout<<"Enter two number"<<endl;
//     cin>>a>>b;
//     class sum obj (a,b);
//     cout<<endl;
//     cout<<"enter one integer and one float number"<<endl;
//     cin>>a>>c;
//     class sum obj2 (a,c);
//     return 0;
// }


#include <iostream>
using namespace std;
class swap
{
    public:
    swap (int a, int b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"after swap"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    swap (int x, int y, int z)
    {
        x=x+y+z;
        y=x-(y+z);
        x=x-(y+z);
        z=x-(y+z);
        cout<<"After swap"<<endl;
        cout<<"a = "<<x<<endl;
        cout<<"b = "<<y<<endl;
        cout<<"c = "<<z<<endl;
    }
};
int main()
{
    int a,b,x,y,z;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    class swap.obj1(a,b);
    cout<<"Enter three number"<endl;
    cin>>x>>y>>z;
    class swap.obj2(x,y,z);
    return 0;
}