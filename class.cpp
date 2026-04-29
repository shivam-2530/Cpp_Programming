#include <iostream>
using namespace std;

int main()
{
    int cd, cm, cy, dd, mm, yy, fd, fm, fy, age;
    cout << "Enter your DoB :- DD/MM/YYYY" << endl;
    cin >> dd >> mm >> yy;
    if ((dd > 0 && dd < 32) && (mm > 0 && mm < 13) && (yy > 1799 && yy <= 2025))
    {
        cout << "Enter current date" << endl;
        cin >> cd >> cm >> cy;
        if (cd > 0 && cd < 32 && cm > 0 && cm < 13)
        {
            if (cd > dd)
            {
                fd = cd - dd;
            }
            else if (cm == 1 || cm == 3 || cm == 5 || cm == 7 || cm == 8 || cm == 10 || cm == 12)
            {
                cd = cd + 31;
                cm = cm - 1;
                fd = cd - dd;
            }
            else if (cm == 4 || cm == 6 || cm == 9 || cm == 11)
            {
                cd = cd + 30;
                cm = cm - 1;
                fd = cd - dd;
            }
            else if (cy % 100 == 0)
            {
                if (cy % 400 == 0)
                {
                    cd = cd + 29;
                    cm = cm-1;
                    fd = cd - dd;
                }
                else
                {
                    cd = cd + 28;
                    cm = cm - 1;
                    fd = cd - dd;
                }
            }
            else if (cy % 4 == 0)
            {
                cd = cd + 29;
                cm = cm - 1;
                fd = cd - dd;
            }
            else
            {
                cd = cd + 28;
                cm = cm - 1;
                fd = cd - dd;
            }

            if (cm >= mm)
            {
                fm = cm - mm;
            }
            else
            {
                cm = cm + 12;
                cy = cy - 1;
                fm = cm - mm;
            }
            if (cy >= yy)
            {
                fy = cy - yy;
                cout << "yy -" << " mm -" << " dd" << endl;
                cout << fy << "-" << fm << "-" << fd << endl;
            }
            else
            {
                cout << "Enter valid DOB" << endl;
            }
            unsigned long int heart = (((((fy * 12) * 30) * 24) * 60) * 72) + ((((fm * 30) * 24) * 60) * 72) + (((fd * 24) * 60) * 72);
            cout << "total heart beat=" << heart << endl;
            float h;
            cout << "enter your height" << endl;
            cin >> h;
            cout << "average weight=" << h * 12 << endl;
        }
        else
        {
            cout << "Enter valide information" << endl;
        }
    }
    else
    {
        cout << "Enter valid DOB" << endl;
    }
    cin.ignore();
    cin.get();   
    return 0;
}