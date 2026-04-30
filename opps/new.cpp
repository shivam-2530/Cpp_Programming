#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter any alphabets"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        {
           cout<<"vowel";
           break;
        }
    default:
    cout<<"not vowel";
        break;
    }
    return 0;
}