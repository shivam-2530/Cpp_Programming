// wap read one number and display using file handing
// #include <iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter one num"<<endl;
//     cin>>n;
//     ofstream fout("shivam.txt");
//     fout<<n;
//     fout.close();
//     ifstream fin("shivam.txt");
//     fin>>n;
//     fin.close();
//     cout<<"number form file "<<n<<endl;
//     return 0;
// }

// wap enter yor name into file and display using filehandling in c++
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    cout<<"enter your name"<<endl;
    cin>>name;
    ofstream fout("s.txt");
    fout<<name;
    fout.close();
    ifstream fin("s.txt");
    fin>>name;
    fin.close();
    cout<<"name form file "<<name;
    return 0;
}