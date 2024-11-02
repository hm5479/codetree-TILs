#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 1;
    cin >> n >> m;
    int arr[n][m];

    for (int col = 0; col < m; col++) {
        int tmp = col;
        for (int row = 0; row < n && tmp >= 0; row++) {
            arr[row][tmp--] = cnt++;
        }
    }

    for (int row = 1; row < n; row++) {
        int tmp = row;
        for (int col = m - 1; tmp < n && col>=0; tmp++, col--) {
            arr[tmp][col] = cnt++;
        }
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}