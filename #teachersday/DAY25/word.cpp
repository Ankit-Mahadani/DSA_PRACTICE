#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>> s;
    string ans;
    int n = s.length();
    int Lcount = 0;
    int Ucount = 0;
    for (char c : s) {
        if (islower(c)) {
            Lcount++;
        }
        else if (isupper(c)) {
            Ucount++;
        }
    }
    if(Lcount > Ucount) {
        for (char &c : s) {
            c = tolower(c);
            ans += c;
        }
    }
    else if(Ucount > Lcount) {
        for (char &c : s) {
            c = toupper(c);
            ans += c;
        }
    }
    else if(Lcount == Ucount) {
        for (char &c : s) {
            c = tolower(c);
            ans += c;
        }
    }
    cout<<ans;
    return 0;
}