#include <iostream>
using namespace std;

int main() {
    int res = 0;
    int temp = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= n; j++) {
                cout << res + j << " ";
                if (j == n) {
                    res = (res + j) + n;
                }
            }
        }
        else {
            for (int j = 0; j < n; j++) {
                cout << res - j << " ";
                if (j == n - 1) {
                    res = (res - j) + n + 1 - 2;
                }
            }
        }
        cout << endl;
    }

    return 0;
}