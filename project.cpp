// Q.) W.A.P enter the date of birth and read the current date and find the age and also display how many time heart beat and dispaly he average weight.
#include <iostream>
using namespace std;

int main()
{
    int dd, dm, dy, cd, cm, cy;
    cout << "Enter you birth date" << endl;
    cin >> dd;
    if (dd > 0 && dd <= 31)
    {
        cout << "Enter you birth month" << endl;
        cin >> dm;
        if (dm > 0 && dm <= 12)
        {
            cout << "Enter you birth year" << endl;
            cin >> dy;
            if (dy > 1700 && dy <= 2024)
            {
                cout << "Enter current day" << endl;
                cin >> cd;
                if (cd > 0 && cd <= 31)
                {
                    cout << "Enter current months" << endl;
                    cin >> cm;
                    if (cm > 0 && cm <= 12)
                    {
                        cout << "Enter curernt year" << endl;
                        cin >> cy;
                        if (cy >= 2025 && cy <= 2040)
                        {
                            if (cd < dd)
                            {
                                cd += 30;
                                cm -= 1;
                            }
                            if (cm < dm)
                            {
                                cm += 12;
                                cy -= 1;
                            }
                            int fd = cd - dd;
                            int fm = cm - dm;
                            int fy = cy - dy;
                            cout << "you age=" << fd << "_" << fm << "_" << fy << endl;
                            fd = fd * 24 * 60;
                            fm = fm * 30 * 24 * 60;
                            int total_day = fy * 365 + fm * 30 + fd;
                            long long total_min = total_day * 24 * 60;
                            long long heart = total_min * 72;
                            cout << "your total heart bets= " << heart << endl;
                            float h;
                            cout << "Now enter you hight" << endl;
                            cin >> h;
                            cout << "your weight =" << 12* h;
                        }
                        else
                        {
                            cout << "cross your current year limt" << endl;
                        }
                    }
                    else
                    {
                        cout << "plz enter correct month" << endl;
                    }
                }
                else
                {
                    cout << "plz enter correct date" << endl;
                }
            }
            else
            {
                cout << "plz enter correct year" << endl;
            }
        }
        else
        {
            cout << "plz enter correct month" << endl;
        }
    }
    else
    {
        cout << "plz enter correct date" << endl;
    }
    return 0;
}