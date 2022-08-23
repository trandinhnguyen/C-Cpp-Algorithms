#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int s=0;
    int a=1;
    int i=1;
    int n=10000;
    while (s<=n) {
        s+=a;
        a+=i;
        i++;
        cout << i << endl;
    }
}
