#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*" << " ";
            cnt++;
        }
        cout << endl;
        
    }

    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
    cout << endl;
    }
}