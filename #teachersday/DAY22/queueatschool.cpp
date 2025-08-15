#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    string s;
    if (!(cin >> n >> t)) return 0;
    cin >> s;

    while (t--) {
        for (int i = 0; i + 1 < n; ) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i += 2;           // skip the pair just swapped
            } else {
                i += 1;
            }
        }
    }
    cout << s << "\n";
    return 0;
}
