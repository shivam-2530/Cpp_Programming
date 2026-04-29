// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch;
//     cout<<"Enter any alphabets"<<endl;
//     cin>>ch;
//     switch (ch)
//     {
//     case 'a':
//         cout<<"Vowel";
//         break;
//     case 'e':
//         cout<<"Vowel";
//         break;
//     case 'i':
//         cout<<"Vowel";
//         break;
//     case 'o':
//         cout<<"Vowel";
//         break;
//     case 'u':
//         cout<<"Vowel";
//         break;
//     case 'A':
//         cout<<"Vowel";
//         break;
//     case 'E':
//         cout<<"Vowel";
//         break;
//     case 'I':
//         cout<<"Vowel";
//         break;
//     case 'O':
//         cout<<"Vowel";
//         break;
//     case 'U':
//         cout<<"Vowel";
//         break;
//     default: cout<<"not vowel";
//         break;
//     }
//     return 0;
// }


// wap display the choice if choice = 1 read two no and find greater. if choice = 2 read a year 
#include <iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"press 1 for greater between 2 no."<<endl;
    cout<<"press 2 for check that leap year or not"<<endl;
    cout<<"press 3 for display the character value"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        int a,b;
        cout<<"Enter two no"<<endl;
        cin>>a>>b;
        if (b>a)
        a=b;
        cout<<a<<" is greater"<<endl;
        break;
    case 2:
        int y;
        cout<<"Enter any year"<<endl;
        cin>>y;
        if (y%100==0)
        {
            if(y%400==100)
            {
                cout<<"leap year";
            }
            else
            {
                cout<<"not leap year";
            }
        }
        else
        {
            if (y%4==0)
            {
                cout<<"leap year";
            }
            else
            {
                cout<<"not leap year";
            }
        }
        break;
        case 3:
            int al;
            cout<<"enter any alphabet"<<endl;
            cin>>al;
            cout<<"value of alphabet= "<< (char)al;
            break;
    default:
         cout<<"wrong choice"<<endl;
        break;
    }
    return 0;
}