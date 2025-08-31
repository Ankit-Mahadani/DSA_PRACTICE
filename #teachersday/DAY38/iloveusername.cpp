#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];

    int amazing = 0;
    int mn = scores[0], mx = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > mx) {
            amazing++;
            mx = scores[i];
        } else if (scores[i] < mn) {
            amazing++;
            mn = scores[i];
        }
    }

    cout << amazing << "\n";
    return 0;
}
