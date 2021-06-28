#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number\n";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
}