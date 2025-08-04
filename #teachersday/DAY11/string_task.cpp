#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string ans = "";
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(char c : s) {
        if(c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        } else {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;
    return 0;
}
