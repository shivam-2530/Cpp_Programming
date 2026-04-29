// wap read n diffrent number in 1d array and arrange accending order.
#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[n],i,j,x;
    cout<<"enter how many elements in array:-"<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"enter one number:-"<<endl;
        cin>>a[i];
    }
    for ( i = 0; i < n ; i++)
    {
        for ( j = i+1 ; j < n; j++)
        {
            if (a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
            
        }
        
    }
    cout<<"arrange in accending order:-"<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}