#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 1; i < n; i++){
        if(i % 4 == 0){
            cnt++;
        }
        else if(i % 100 != 0 && i % 400 == 0){
            cnt++;
        }
    }
        cout << cnt;
    return 0;
}