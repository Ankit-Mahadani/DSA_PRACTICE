#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; 
    if(!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // leftmost maximum
    int mx = a[0], imax = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] > mx) { mx = a[i]; imax = i; }
    }

    // rightmost minimum
    int mn = a[0], imin = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] <= mn) { mn = a[i]; imin = i; }
    }

    int swaps = imax + (n - 1 - imin) - (imax > imin ? 1 : 0);
    cout << swaps << "\n";
    return 0;
}
