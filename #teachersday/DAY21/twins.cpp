#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    int total = accumulate(a.begin(), a.end(), 0);
    int taken = 0, cnt = 0;

    for (int v : a) {
        taken += v;
        ++cnt;
        if (taken > total - taken) break;
    }

    cout << cnt << '\n';
    return 0;
}
