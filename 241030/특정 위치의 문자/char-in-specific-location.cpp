#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char n;
    bool find = false;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (arr[i] == n) {
            cout << i;
            find = true;
        }
    }

    if (!find) cout << "None";
}