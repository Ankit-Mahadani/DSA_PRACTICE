#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    if (!(cin >> s >> t)) return 0;
    string r = s;
    reverse(r.begin(), r.end());
    cout << (r == t ? "YES" : "NO") << "\n";
    return 0;
}
