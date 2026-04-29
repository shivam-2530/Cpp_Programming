// wap read 5 value and display using 1D array.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5];
//     cout<<"Enter five no"<<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cin>>a[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// wap read n no into 1 d array then read then read another no and search that no is prgent or not 
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,i,s;
//     int k[n];
//     cout<<"how many num you have "<<endl;
//     cin>>n;
//     for ( i = 0; i < n; i++)
//     {
//         cout<<"enter number"<<endl;
//         cin>>k[i];
//     }
//     cout<<"enter number which you want to search"<<endl;
//     cin>>s;
//     for (i=0; i<n; i++)
//     {
//         if (k[i]==s)
//         {
//             cout<<"num is present";
//             break;
//         }   
//     }
//     if (i==n)
//     {
//         cout<<"not present"<<endl;
//     }
//     return 0;
// }

// wap read n diffrent no into 1d array then read a no and insert where user want.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int a[n], i, s, x;
//     cout << "enter how many elements in array:-" << endl;
//     cin >> n;
//     cout << "enter five number:-" << endl;
//     for (i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "enter a number to insert:- ";
//     cin >> x;
//     cout << "enter position to insert:- ";
//     cin >> s;
//     for (i = n; i >= s; i--)
//     {
//         a[i] = a[i-1];
//     }
//     a[s - 1] = x;
//     n++;
//     cout<<"after insert"<<endl;
//     for (i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

// wap read a no inti 1 d array then replace the no.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int a[n],i,x,s;
//     cout<<"Enter how many elements in array:-"<<endl;
//     cin>>n;
//     for ( i = 0; i < n; i++)
//     {
//         cout<<"enter a no:-"<<endl;
//         cin>>a[i];
//     }
//     cout<<"enter a no which you want to remove:-";
//     cin>>x;
//     for ( i = 0; i < n; i++)
//     {
//         if (a[i]==x)
//         {
//             cout<<"enter a no to insert:-";
//             cin>>s;
//             a[i]=s;
//             break;
//         }
//     }
//     cout<<"after replacing"<<endl;
//     for ( i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
//     return 0;
// }