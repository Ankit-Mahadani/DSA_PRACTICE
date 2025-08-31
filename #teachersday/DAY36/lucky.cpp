#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; if (!(cin >> n)) return 0;
    vector<int> lucky;
    queue<int> q;
    q.push(4); q.push(7);
    while (!q.empty()) {
        int x = q.front(); q.pop();
        if (x > 1000) continue;
        lucky.push_back(x);
        q.push(x*10 + 4);
        q.push(x*10 + 7);
    }
    for (int L : lucky) {
        if (n % L == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
