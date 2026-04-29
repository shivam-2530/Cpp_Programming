#include <iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"press 1 for more choice"<<endl;
    cout<<"press 2 for simple interest"<<endl;
    cout<<"press 3 for round figure"<<endl;
    cin>>ch;
    switch (ch)
    {
        case 1:
        cout<<"press 1 for reverse 2 digit number"<<endl;
        cout<<"press 2 for check quantity of fuel"<<endl;
        int ch1;
        cin>>ch1;
        switch (ch1)
        {
          case 1:
          {
            int n;
            cout<<"Enter two digit number"<<endl;
            cin>>n;
            cout<<"revrse no="<<(n%10)*10+(n/10);
            break;
          }
          case 2:
          {
            float ta,q,pr;
            cout<<"Enter price per liter of fuel"<<endl;
            cin>>pr;
            cout<<"enter total amount"<<endl;
            cin>>ta;
            q=ta/pr;
            cout.precision(2);
            cout<<"total quantity of fuel= "<<q<<" liter"<<endl;;
            break;
          }
           default: cout<<"wrong choice"<<endl;
            break;
        }
        break;
        case 2:
        {
        float si,t,r,p;
        cout<<"enter princple"<<endl;
        cin>>p;
        cout<<"enter rate"<<endl;
        cin>>r;
        cout<<"enter time"<<endl;
        cin>>t;
        si=(p*r*t)/100;
        cout<<"S.I ="<<si<<endl;
        break;
        }
        case 3:
        {
        float n;
        cout<<"enter point digit to convert round figure"<<endl;
        cin>>n;
        int x=n;
        n=n-x;
        if (n>0.5)
        {
            cout<<x+1;
        }
        else
        {
            cout<<x;
        } 
        break;
        }
        default: 
        cout<<"wrong choice"<<endl;
    }
    return 0;
}