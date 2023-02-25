#include <bits/stdc++.h>
using namespace std;
#define N 100000

int main()
{
    int A[N];
    int n = 0, i = 0, k = 0;
    cin >> n >> k;

    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        A[i] = rand() % (100 - 0 + 1) + 0;
        cout << "A" << i + 1 << ": " << A[i] << endl;
    }

    sort(A, A + n);
    cout << "After sort" << endl;
    for (i = 0; i < n; i++)
        cout << "A" << i + 1 << ": " << A[i] << endl;

    int left = 0, right = n - 1;
    int mid = (left + right) / 2;

    while (A[mid] != k)
    {
        if (left >= right)
        {
            cout << 0;
            return 0;
        }

        if (A[mid] > k)
            right = mid;
        else
            left = mid + 1;
        mid = (left + right) / 2;
    }

    cout << mid + 1;
}
