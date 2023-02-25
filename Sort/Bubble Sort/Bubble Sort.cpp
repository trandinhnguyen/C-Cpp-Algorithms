#include <bits/stdc++.h>
using namespace std;

#define N 100000

void bubbleSort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]);
        }
    }
}

int main()
{
    int n;
    int A[N];
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i + 1 << "]: ";
        cin >> A[i];
    }

    bubbleSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << endl;
}
