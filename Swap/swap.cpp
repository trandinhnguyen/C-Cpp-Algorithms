#include <bits/stdc++.h>
using namespace std;

void swap1(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void swap2(int &a, int &b)
{
    a = a * b;
    b = a / b;
    a = a / b;
}

void swap3(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    cout << "Swap 1" << endl;
    int a = 0, b = 0;
    cin >> a >> b;
    swap1(a, b);
    cout << a << " " << b << endl;

    cout << "Swap 2" << endl;
    cin >> a >> b;
    swap2(a, b);
    cout << a << " " << b << endl;

    cout << "Swap 3" << endl;
    cin >> a >> b;
    swap3(a, b);
    cout << a << " " << b;

    return 0;
}
