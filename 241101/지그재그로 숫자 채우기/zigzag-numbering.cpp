#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < m;) {
        for (int j = 0; j < n; j++) {
            arr[j][i] = cnt++;
        }
        i++;

        if(i>=m) break;

        for (int j = n - 1; j >= 0; j--) {
            arr[j][i] = cnt++;
        }
        i++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}