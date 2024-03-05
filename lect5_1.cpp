#include <iostream>
using namespace std;

int main()
{
    int a = 1;

    // practical 1  while loop
    while (a <= 10)
    {
        cout << a << endl;
        a++;
    }

    // practical 2  do-while loop
    do
    {
        cout << a << endl;
        a++;
    } while (a <= 10);

    // practical 3  for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    // practical 4  for loop
    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }

    // practical 5  for loop
    for (int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0)
            cout << i << endl;
    }

    return 0;
}
