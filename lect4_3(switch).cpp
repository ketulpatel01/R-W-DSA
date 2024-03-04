#include <iostream>
using namespace std;

int main()
{
    // practical 1
    char a;
    cout << "Enter a character(m,t,w,T,f,s,S): ";
    cin >> a;

    switch (a)
    {
        case 'm':   cout <<  "Monday" << endl;  break;
        case 't':   cout <<  "Tuesday" << endl;  break;
        case 'w':   cout <<  "Wednesday" << endl;  break;
        case 'T':   cout <<  "Thursday" << endl;  break;
        case 'f':   cout <<  "Friday" << endl;  break;
        case 's':   cout <<  "Saturday" << endl;  break;
        case 'S':   cout <<  "Sunday" << endl;  break;
        default:    cout << "Invalid choise..." << endl;
    }


    // practical 2
    int choise;

    cout << "Press 1 for order Sandwich..." << endl;
    cout << "Press 2 for order Pizza..." << endl;
    cout << "Press 3 for order Burger..." << endl;
    cout << "Enter your choise: ";
    cin >> choise;

    switch(choise)
    {
        case 1: cout << "You ordered Sandwich." << endl; break;
        case 2: cout << "You ordered Pizza." << endl; break;
        case 3: cout << "You ordered Burger." << endl; break;
        default :cout << "Invalid choice" << endl;
    }
    
    return 0;
}
