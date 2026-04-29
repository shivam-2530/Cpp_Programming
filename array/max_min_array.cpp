#include <iostream>
using namespace std;

int main()
{
    int a[100],k[100],i,n,j,s,max,min;
    cout<<"Enter how many number you have\n";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter one number\n";
        cin>>a[i];
    }
    for ( i = 0; i < n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }

    for ( i = 0, j=n-1; i<=j; i++,j--)
    {
        if (i!=j)
        {
            cout<<a[j]<<"  "<<a[i]<<"  ";
        }
        else
        {
            cout<<a[i]<<"  ";
        }
    }
    
    return 0;
}