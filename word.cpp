#include <iostream>
using namespace std;

int main()
{
    int n,r=0,s=0;
    cout<<"Enter a number of any digits "<<endl;
    cin>>n;
    while (n>0)
    {
        s=s*10+(n%10);
        n=n/10;
    }
    while (s>0)
    {
        r=s%10;
        switch (r)
        {
        case 0:
            cout<<"zero ";
            break;
        case 1:
            cout<<"one ";
            break;
        case 2:
            cout<<"two ";
            break;
        case 3:
            cout<<"three ";
            break;
        case 4:
            cout<<"four ";
            break;
        case 5:
            cout<<"five ";
            break;
        case 6:
            cout<<"six ";
            break;
        case 7:
            cout<<"seven ";
            break;
        case 8:
            cout<<"eight ";
            break;
        case 9:
            cout<<"nine ";
            break;
        default:
        cout<<"😁";
            break;
        }
        s=s/10;
    }
    
    return 0;
}