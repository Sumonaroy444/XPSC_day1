#include <iostream>
using namespace std;
int main() {
    int S, T;
    cin >> S >> T;
    int count = 0;
    for (int a = 0; a <= S; a++) {
        for (int b = 0; b <= S; b++) {
            if (a + b > S) 
                break; 
            for (int c = 0; c <= S; c++) {
                if (a + b + c > S) 
                   break; 
                if (a * b * c > T)
                    break; 

                count++;
            }
        }
    }
    cout << count << endl;
}



