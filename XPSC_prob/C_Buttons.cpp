#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int press_a_twice = a + (a - 1);
    int press_b_twice = b + (b - 1);
    int press_each_once = a + b;
    int mx_press = max(press_a_twice, max(press_b_twice, press_each_once));

    cout << mx_press << endl;
}



