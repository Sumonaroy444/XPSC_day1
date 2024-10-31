#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        bool f = false;
        int sz = s.size();
        for (int i = 0; i < sz - 1; i++) {
            cout << s[i];
            if (s[i] == s[i + 1] && !f) {
                if (s[i] != 'z') {
                    cout << char(s[i] + 1);
                } 
                else {
                    cout << 'a';
                }
                f = true;
            }
        }
        
        if (f)
            cout << s[sz - 1] << endl;
        else if (!f && s[sz - 1] != 'z')
            cout << s[sz - 1] << char(s[sz - 1] + 1) << endl;
        else if (!f)
            cout << s[sz - 1] << 'a' << endl;
    }
}


