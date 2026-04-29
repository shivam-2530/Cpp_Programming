// W.A.P raed into 5*5 matrix 
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5][5],i,j;
//     cout<<"enter 5 number"<<endl;
//     for ( i = 0; i < 5; i++)
//     {
//         for (j=0; j< 5; j++)
//         {
//             cin>>a[i][j];
//         }
//         cout<<endl;
//     }
//     for ( i = 0; i < 5; i++)
//     {
//         for ( j = 0; j < 5; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// Wap read into 5*5 martix and print the sum.
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int a[5][5],i,j,s=0;
//     cout<<"enter 25 number:-"<<endl;
//     for ( i = 0; i < 5; i++)
//     {
//         for ( j = 0; j < 5; j++)
//         {
//             cin>>a[i][j];
//         }
//         cout<<endl;
//     }
//     system("cls");
//     for ( i = 0; i < 5; i++)
//     {
//         for ( j = 0; j < 5; j++)
//         {
//             cout<<a[i][j]<<" ";
//             s=s+a[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<"the sum is = "<<s;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int k[2][2][2],i,j,l;
//     for(i=0;i<2;i++)
//     {
//         cout<<"value into"<<i+1<<"matrix";
//         for(j=0;j<2;j++)
//         {
//             for(l=0;l<2;l++)
//             {
//             cout<<"enter one numner "<<endl;
//             cin>>k[i][j][l];
//         }
//     }
// }
// for(i=0;i<2;i++)
// {
//     cout<<"**value**"<<endl;
//     for(j=0;j<2;j++)
//     {
//         for(l=0;l<2;l++)
//         {
//             cout<<k[i][j][l];
//         }
//         cout<<endl;
//     }

//     cout<<endl;
// }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5][5],i,j,sum;
//     cout<<"enter 5*5 matrix"<<endl;
//     for ( i = 0; i < 5; i++)
//     {
//         for ( j = 0; j < 5; j++)
//         {
//             cin>>a[i][j];
//         }
//         cout<<endl;
//     }
//     for ( j = 0; j < 5; j++)
//     {
//         sum=0;
//         for ( i = 0; i < 5; i++)
//         {
//             sum=sum+a[i][j];
//         }
//         cout<<"coulumn "<<j+1<<"="<<sum<<endl;
//     }
//     for ( i = 0; i < 5; i++)
//     {
//         sum=0;
//         for ( j = 0; j < 5; j++)
//         {
//             sum=sum+a[i][j];
//         }
//         cout<<"row "<<i+1<<"="<<sum<<endl;
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int a[2][2],t[2][2],i,j;
    cout<<"enter 2*2 matrix"<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}o