// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[2][4][4],i,j,k;
//     cout<<"2 matrix 4*4";
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 4; j++)
//         {
//             for ( k = 0; k < 4; k++)
//             {
//                 cin>>a[i][j][k];
//             }
//         }
//         cout<<endl;
//     }
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 4; j++)
//         {
//             for ( k = 0; k < 4; k++)
//             {
//                 cout<<a[i][j][k];
//             }
            
//         }
        
//     }
    
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int a[3][2][2],i,j,k,sum;
    cout<<" 3 matrix 2*2"<<endl;
    for ( i = 0; i < 3; i++)
    {
        sum=0;
        for ( j = 0; j < 2; j++)
        {
            for ( k = 0; k < 2; k++)
            {
                cin>>a[i][j][k];
                sum=sum+a[i][j][k];
            }
        }
        cout<<"sum ="<<sum<<endl;
    }
    return 0;
}
