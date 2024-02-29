#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 13;
    // if condition
    if (a < b)
        cout << "Welcome to c++" << endl;

    if (a != b)
        cout << "Not equal" << endl;

  
    // if-else condition
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    if (a > b)
        cout << "a is max.." << endl;
    else
        cout << "b is max.." << endl;

  
    // if-else ladder
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age < 18)
        cout << "You can't vote..." << endl;
    else if(age > 18)
        cout << "You can vote..." << endl;
    else if(age  == 18)
        cout << "You can also vote..." << endl;

    return 0;
}
