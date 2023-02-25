#include <bits/stdc++.h>
using namespace std;

#define N 100000

void Partition(int A[], int left, int right)
{
    if (left >= right)
        return;

    int pivot = A[(left + right) / 2];
    int i = left, j = right;

    while (i < j)
    {
        while (A[i] < pivot)
            i++;
        while (A[j] > pivot)
            j--;

        if (i <= j)
        {
            if (i < j)
                swap(A[i], A[j]);
            i++;
            j--;
        }
    }

    Partition(A, left, j);
    Partition(A, i, right);
}

void quickSort(int A[], int n)
{
    Partition(A, 0, n - 1);
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

    quickSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << endl;
}
