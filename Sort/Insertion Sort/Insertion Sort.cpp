#include <bits/stdc++.h>
using namespace std;

#define N 100000

void insertionSort(int A[], int n) {
    int x, pos;
    for (int i=1; i<n; i++) {
        x = A[i];
        pos = i - 1;

        while (pos >= 0 && A[pos] > x) {
            A[pos+1] = A[pos];
            pos--;
        }
        A[pos+1] = x;
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

    insertionSort(A, n);

    for (int i=0; i<n; i++)
        cout << A[i] << endl;
}
