#include <bits/stdc++.h>
using namespace std;
#define N 100000

int _binarySearch(int A[], int left, int right, int k) {
    int mid = (left + right) / 2;
    if (A[mid] == k) return mid;

    if (left >= right) return -1;

    if (A[mid] > k)
        _binarySearch(A, left, mid, k);
    else
        _binarySearch(A, mid + 1, right, k);
}

int binarySearch(int A[], int n, int k) {
    return _binarySearch(A, 0, n-1, k);
}

int main() {
    int A[N];
    int n = 0, k = 0, i = 0;
    cin >> n >> k;

    srand(time(NULL));

    for (i=0; i<n; i++) {
        A[i] = rand() % (100 - 0 + 1) + 0;
        cout << "A" << i+1 << ": " << A[i] << endl;
    }

    sort(A, A+n);
    cout << "After sort" << endl;
    for (i=0; i<n; i++)
        cout << "A" << i+1 << ": " << A[i] << endl;

    cout << binarySearch(A, n, k) + 1;

    return 0;
}
