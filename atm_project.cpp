// W.A.P read the password a password is correct then display the choice 1= withdraw 2= balance enquiry 3 =  other if choice 1 is selected then again display 1 = saving 2= current 3= kcc if choice 1 or 2 is selected then select the amount. Should be less than 25 thousand.
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main()
{
    system("cls");
    back:
    int pass, ch, ch1;
    cout << "Enter password" << endl;
    cin >> pass;
    system("cls");
    if (pass >= 1000 && pass <= 9999)
    {
        cout << "press 1st for Withdraw" << endl;
        cout << "press 2nd for check Blance enquiry" << endl;
        cout << "press 3rd for Other" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("cls");
            cout << "press 1st for Saving" << endl;
            cout << "press 2nd for Current" << endl;
            cout << "press 3rd for KCC" << endl;
            cin >> ch1;
            switch (ch1)
            {
            case 1:
            case 2:
            case 3:
            {
                system("cls");
                int amt;
                cout << "Enter amount" << endl;
                cin >> amt;
                system("cls");
                if (amt <= 25000)
                {
                    system("cls");
                    cout << "plz wait\nTransaction in process..." << endl;
                }
                else
                {
                    system("cls");
                    cout << "Plz enter amount less than 25000" << endl;
                }
                break;
            }
            default:
                system("cls");
                cout << "wrong choise" << endl;
                break;
            }
            break;
        case 2:
        {
            system("cls");
            int bla = 56000;
            cout << "Check the blance enquiry" << endl;
            cout << "blance : " << bla;
            break;
        }

        default:
            system("cls");
            cout << "wrong choice" << endl;
            break;
        }
    }
    else
    {
        system("cls");
        cout << "plz enter vaild password" << endl;
        cout << "Try again" << endl;
        for (int i = 0; i <= 5; i++)
        {
            Beep(750, 500);
        }
        cout << "remove your atm" << endl;
    }
    cin.ignore();
    cin.get();
    system("cls");
    goto back;
    return 0;
}