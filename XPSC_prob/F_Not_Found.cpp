#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    bool present[26] = {false};
    
    for (char c : S) {
        present[c - 'a'] = true;
    }
    for (int i = 0; i < 26; ++i) {
        if (!present[i]) {
            cout << (char)('a' + i) << endl;  
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}


