#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number\n";
    cin >> num;

    if (num < 2)
    {
        cout << num << " is not a prime.";
    }
    else
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << " is a prime.";
        }
        else
        {
            cout << num << " is not a prime.";
        }
    }
}