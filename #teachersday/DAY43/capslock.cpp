#include <bits/stdc++.h>
using namespace std;
int main() {
    string word;
    cin >> word;
    bool all_upper = true, rest_upper = true;
    
    for (char c : word) 
        if (!isupper(c)) { all_upper = false; break; }
    
    for (size_t i = 1; i < word.size(); i++) 
        if (!isupper(word[i])) { rest_upper = false; break; }
    
    if (all_upper || rest_upper) {
        for (char &c : word) {
            if (isupper(c)) c = tolower(c);
            else c = toupper(c);
        }
    }
    
    cout << word << "\n";
    return 0;
}
