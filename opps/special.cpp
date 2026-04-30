#include <iostream>
using namespace std;
int main()
{
    char n[15];
    cout<<"enter your name"<<endl;
    cin.getline(n,15);
    cout.write(n,15);
    return 0;
}