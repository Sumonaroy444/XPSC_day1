#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<pair<string, string>> mp;

    for (int i = 1; i <= n; i++) {
        string a, b;
        cin >> a >> b;
        mp.insert({a, b});
    }

    cout << mp.size() << endl;
}

