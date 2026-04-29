// #include <iostream>
// using namespace std;

// int main()
// {
//     char n[20];
//     cout<<"enter your name";
//     cin.getline(n,20);
//     cout.width(10);
//     cout.write(n,20);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char n[25];
//     cout<<"enter your name";
//     cin>>n;
//     cout.width(15);
//     cout.fill("@");
//     cout<<n;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n,r,s=0;
    cout<<"Enter a number of any digits "<<endl;
    cin>>n;
    while (n>0)
    {
        s=s*10+(n%10);
        n=n/10;
    }
    cout<<s;
    return 0;
}