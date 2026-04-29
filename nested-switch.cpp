// #include <iostream>
// using namespace std;

// int main()
// {
//     int ch,ch2;
//     cout<<"press 1"<<endl;
//     cin>>ch;
//     switch (ch)
//     {
//     case 1:
//         cout<<"1-sum"<<endl;
//         cout<<"2-substract"<<endl;
//         cout<<"3-multiply"<<endl;
//         cout<<"selcet anyone"<<endl;
//         cin>>ch2;
//         switch (ch2)
//         {
//         case 1:
//         {
//             int x=10,y=20;
//             cout<<"Sum= "<<x+y;
//             break;
//         }
//         case 2:
//         {
//             int x=10,y=5;
//             cout<<"sub= "<<x-y;
//             break;
//         }
//         case 3:
//         {
//             int a=5,b=4;
//             cout<<"mul= "<<a*b;
//             break;
//         }
//         default:cout<<"wrong choice"<<endl;
//             break;
//         }
//         break;
//     case 2:
//         cout<<"you are in other switch";
//         break;
//     default:cout<<"wrong choice"<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int ch,ch1;
    cout<<"press 1 for more choice"<<endl;
    cout<<"press 2 for simple intrest"<<endl;
    cout<<"press 3 for round figure"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"press 1 for reverse number"<<endl;
        cout<<"press 2 for give quentity of fule"<<endl;
        cin>>ch1;
        switch (ch1)
        {
        case 1:
            int n;
            cout<<"enter 2 digits number"<<endl;
            cin>>n;
            cout<<"after reverse = "<<(n%10)*10+(n/10);
            break;
        case 2:
            float rate, amount;
            cout<<"enter rate per liter of fule"<<endl;
            cin>>rate;
            cout<<"enter total amount"<<endl;
            cin>>amount;
            cout<<"quentity of fule = "<<amount/rate<<" liter"; 
            break;
        default:
        cout<<"wrong choice"<<endl;
            break;
        }
        break;

        case 2:
        float si,p,r,t;
        cout<<"Enter principle , rate , time"<<endl;
        cin>>p>>r>>t;
        si= (p*r*t)/100;
        cout<<"simple intrest = "<<si<<endl;
        break;

        case 3:
        {
        float a;
        cout<<"enter any float no"<<endl;
        cin>>a;
        int s=a;
        a=a-s;
        if (a>0.5)
        {
            cout<<s+1;
        }
        else
        {
            cout<<s;
        }
        break;
        }
    default:
    cout<<"wrong choice"<<endl;
        break;
    }
    return 0;
}