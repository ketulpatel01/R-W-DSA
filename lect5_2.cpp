#include <iostream>
using namespace std;

int main()
{
    // sum of n numbers using while loop
    int i = 1, num, sum = 0;
    cout << "Enter  the number of elements you want to add: ";
    cin >> num;

    while (i <= num)
    {
        sum += i;
        i++;
    }
    cout << "The sum is : " << sum << endl;

    // facotrial of a number
    int fact = 1;
    cout << "Enter  a positive integer: ";
    cin >> num;

    i = num;

    while (i >= 1)
    {
        fact *= i;
        i--;
    }
    cout << "Factorial is : " << fact << endl;

    // factors of a number
    int n;
    cout << "Enter  an integer: ";
    cin >> n;

    i = 1;

    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
        }
        i++;
    }

    return 0;
}
