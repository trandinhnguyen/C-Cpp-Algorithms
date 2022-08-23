#include <bits/stdc++.h>
using namespace std;

#define N 100000

void selectionSort(int A[], int n) {
    int minE;
    for (int i=0; i < n-1; i++) {
        minE = i;
        for (int j = i+1; j<n; j++) {
            if (A[j] < A[minE])
                minE = j;
        }
        if (minE != i)
            swap(A[i], A[minE]);
    }
}

int main() {
    int n;
    int A[N];
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        cout << "A[" << i+1 << "]: ";
        cin >> A[i];
    }

    selectionSort(A, n);

    for (int i=0; i<n; i++)
        cout << A[i] << endl;
}
