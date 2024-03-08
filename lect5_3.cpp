#include <iostream>
using namespace std;

int main()
{
    // practical 1
    int num;
    cout << "Enter  the number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    // practical 2
    int n, sum = 0, rem;
    cout << "Enter  the number: ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;

    // practical 3
    int num1, first, last;
    cout << "Enter  the number: ";
    cin >> num1;

    last = num1 % 10;

    while (num1 >= 10)
    {
        num1 /= 10;
    }

    first = num1;
    cout << "Sum of first & last digits: " << first + last;

    return 0;
}
