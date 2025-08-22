#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    if (!(cin >> n)) return 0;
    string s; cin >> s;
    int a = 0, d = 0;
    for (char c : s) {
        if (c == 'A') ++a;
        else if (c == 'D') ++d;
    }
    if (a > d) cout << "Anton\n";
    else if (d > a) cout << "Danik\n";
    else cout << "Friendship\n";
    return 0;
}
