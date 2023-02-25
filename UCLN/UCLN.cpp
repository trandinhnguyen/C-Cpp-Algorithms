#include <bits/stdc++.h>
using namespace std;

int UCLN(int n, int m)
{
    if (n == m)
        return n;

    if (n > m)
        n = n - m;
    else
        m = m - n;

    UCLN(n, m);
}

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    cout << UCLN(n, m);
    return 0;
}
