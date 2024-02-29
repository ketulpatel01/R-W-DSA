#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    if (a == b && b == c && a == c)
        cout << "All values are same.." << endl;
    else
    {
        if (a > b)
        {
            if (a > c)
                cout << "a is max.." << endl;
            else
                cout << "c is max.." << endl;
        }
        else
        {
            if (b > c)
                cout << "b is max.." << endl;
            else
                cout << "c is max.." << endl;
        }
    }

    return 0;
}
