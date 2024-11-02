#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    long long totalSum = 0;
    int smallestOdd = 1e9 + 1;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        totalSum += v[i];


        if (v[i] % 2 != 0) {
            smallestOdd = min(smallestOdd, v[i]);
        }
    }
    if (totalSum % 2 == 0) {
        cout << totalSum << endl;
    }
    else {

        cout << totalSum - smallestOdd << endl;
    }
}

