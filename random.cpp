#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
            continue;
        cout << i << endl;
    }

    return 0;
}

// modulo operator gives last digits means -> 12345 % 10 = 5 12345 % 100 = 45
// if we want to get last 2 digits we can use % 100

// / operator gives quotient (aagadna) means -> 12345 / 10 = 1234 12345 / 100 = 123
// if we want to get quotient of last 2 digits we can use / 100