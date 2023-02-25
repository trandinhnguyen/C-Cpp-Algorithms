#include <bits/stdc++.h>
using namespace std;

#define N 100000

void mergeArray(int A[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *leftArray = new int[n1];
    int *rightArray = new int[n2];

    for (int i = 0; i < n1; i++)
        leftArray[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        rightArray[i] = A[mid + i + 1];

    int i = 0, j = 0, current = left;
    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            A[current] = leftArray[i];
            current++;
            i++;
        }
        else
        {
            A[current] = rightArray[j];
            current++;
            j++;
        }
    }

    while (i < n1)
    {
        A[current] = leftArray[i];
        current++;
        i++;
    }

    while (j < n2)
    {
        A[current] = rightArray[j];
        current++;
        j++;
    }

    delete[] leftArray, rightArray;
}

void _mergeSort(int A[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        _mergeSort(A, left, mid);
        _mergeSort(A, mid + 1, right);

        mergeArray(A, left, mid, right);
    }
}

void mergeSort(int A[], int n)
{
    _mergeSort(A, 0, n - 1);
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

    mergeSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << endl;
}
