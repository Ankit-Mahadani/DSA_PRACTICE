#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n = a.size();
    string res = "";

    for (int i = 0; i < n; i++) {
        res += (a[i] == b[i]) ? '0' : '1';
    }

    cout << res << "\n";
    return 0;
}
