#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the value of a, b & c: ";
    cin >> a >> b >> c;

    // practical 1
    (a < b) ? cout << "Value of a is smaller." << endl : cout << "Value of b is smaller." << endl;

    // practical 2
    int min;
    min = (a < b) ? a : b;
    cout << "The minimum number is: " << min << endl;

    // practical 3
    min = (a < b) ? (a < c) ? a : c : (b < c) ? b : c;
    cout << "The minimum number is: " << min << endl;
    
    return 0;
}
