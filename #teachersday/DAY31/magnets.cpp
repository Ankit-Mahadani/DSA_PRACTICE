#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; 
    if(!(cin >> n)) return 0;
    string s, prev;
    int groups = 0;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (i == 0) {
            groups = 1;
        } else if (s != prev) {
            ++groups;
        }
        prev = s;
    }
    cout << groups << '\n';
    return 0;
}
