// wap read your name and print
// #include <iostream>
// using namespace std;

// int main()
// {
//     char c[50];
//     cout<<"enter yor name"<<endl;
//     cin>>c;
//     cout<<c;
//     return 0;
// }

// wap read enter any string and count total charater without using length string function.
// #include <iostream>
// using namespace std;

// int main()
// {
//     char n[25];
//     int count=0,i=0;
//     cout<<"enter your name"<<endl;
//     cin>>n;
//     while (n[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     cout<<"total char = "<<count<<endl;
//     return 0;
// }

// wap read enter any string and count total charater with using length string function.

// #include <iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char n[50];
//     cout<<"enter string"<<endl;
//     cin>>n;
//     cout<<"total character = "<<strlen(n);
//     return 0;
// }

// wap read any string and reverse.
// #include <iostream>
// using namespace std;
// 
// int main()
// {
//     char n[25],c;
//     int count=0,i=0;
//     cout<<"enter your name"<<endl;
//     cin>>n;
//     while (n[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     cout<<"name = "<<n<<endl;
//     i=count-1;
//     while (i>=0)
//     {
//         cout<<n[i];
//         i--;
//     } 
//     return 0;
// }

// wap read one string value and count how many vowel it have.

// #include <iostream>
// using namespace std;
// int main()
// {
//     char n[25];
//     int count=0,i=0;
//     cout<<"Enter any string"<<endl;
//     cin.getline (n,25);
//     while (n[i]!=0)
//     {
//         if (n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U')
//         {
//             count++;
//         }
//         if (n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')
//         {
//             count++;
//         }
//         i++;
//     }
//     cout<<"Total vowel = "<<count;
//     return 0;
// }

// wap read any string and covert the first leter upper to lower and lower to upper
// #include <iostream>
// using namespace std;

// int main()
// {
//     char n[25];
//     int count=0;
//     cout<<"Enter any string"<<endl;
//     cin.getline (n,25);
//     if (n[0]>=65&&n[0]<=90)
//     {
//         n[0]=n[0]+32;
//     }
//     else
//     {
//         n[0]=n[0]-32;
//     }
//     cout<<n;
//     return 0;
// }