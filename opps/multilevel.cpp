// wap 
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a,b;
//     void input()
//     {
//         cout<<"enter two number"<<endl;
//         cin>>a>>b;
//     }
// };
// class B :public A
// {
//     public:
//     int n;
//     void input2 ()
//     {
//         cout<<"enter one number"<<endl;
//         cin>>n;
//     }
//     void sum ()
//     {
//         cout<<"sum is ="<<a+b<<endl;
//     }
// };
// class C : public B
// {
//     public:
//     void evenodd ()
//     {
//         if (n%2==0)
//         {
//             cout<<"Even number";
//         }
//         else
//         {
//             cout<<"odd number";
//         }
//     }
// };
// int main()
// {
//     class C obj;
//     obj.input();
//     obj.sum();
//     obj.input2();
//     obj.evenodd();
//     return 0;
// }


// wap read one no of any digit reverse then read no of any digit and check that no is palidron or not
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int n;
//     void input()
//     {
//         cout<<"enter one number of 3 digits"<<endl;
//         cin>>n;
//     }
// };
// class B:public A
// {
//     public:
//     int r=0;
//     void reverse()
//     {
//         int i=n;
//         while (i>0)
//         {
//             int s=i%10;
//             r=r*10+s;
//             i=i/10;
//         }
//         cout<<"reverse = "<<r<<endl;
//     }
// };
// class C : public B
// {
//     public:
//     void pali ()
//     {
//     if (r==n)
//     {
//         cout<<"palidron number";
//     }
//     else
//     {
//         cout<<"Not palidron number";
//     }
//     }
// };
// int main()
// {
//     class C obj;
//     obj.input();
//     obj.reverse();
//     obj.pali();
//     return 0;
// }

// // wap read one no and print the table and also check that no prime or not
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
//         system("cls");
//     }
// };
// class B :public A
// {
//     public:
//     int i;
//     void table()
//     {
//         for ( i = 1; i <= 10; i++)
//         {
//             cout<<n*i<<endl;
//         }
//         cout<<endl;
//     }
// };
// class C : public B
// {
//     public:
//     int j=2;
//     void prime ()
//     {
//         while (j<=n)
//         {
//             if (n%j==0)
//             {
//                 break;
//             }
//             j++;
//         }
//         if (n==j)
//         {
//             cout<<"prime no"<<endl;
//         }
//         else
//         {
//             cout<<"not prime no"<<endl;
//         }
//     }
// };
// int main()
// {
//     class C obj;
//     obj.input();
//     obj.table();
//     obj.prime();
//     return 0;
// }

// wap read one no and check that no is perfect or not. and how many didgit it has.
#include <iostream>
using namespace std;
class A
{
    public:
    int n;
    void input()
    {
        cout<<"enter one number"<<endl;
        cin>>n;
    }
};
class B : public A
{
    public:
    int i,s=0;
    void perfect()
    {
        for ( i = 1; i < n; i++)
        {
            if (n%i==0)
            {
                s=s+i;
            }
        }
        if (s==n)
        {
            cout<<"it is perfect number"<<endl;
        }
        else
        {
            cout<<"it is not a perfect number"<<endl;
        }
    }
};
class C : public B
{
    public:
    int j=0;
    void digits()
    {
        while (n!=0)
        {
            n=n/10;
            j++;
        }
        cout<<"digits of your number is = "<<j<<endl;
    }
};
int main()
{
    class C obj;
    obj.input();
    obj.perfect();
    obj.digits();
    return 0;
}