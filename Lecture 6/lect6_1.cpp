#include <iostream>
using namespace std;

int main()
{
    // practical 1
    for (int i = 1; i <=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
   
    // practical 2
    for (int i = 1; i <=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}