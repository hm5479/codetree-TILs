#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 1;
    cin >> n >> m;
    int arr[n][m];

    for (int col = 0; col < m; col++) {
        int curr_col = col;
        int curr_row=0;

        while(curr_row < n && curr_col >= 0){
            arr[curr_row][curr_col] = cnt;

            cnt++;
            curr_row++;
            curr_col--;
        }

        // for (int row = 0; row < n && curr_col >= 0; row++) {
        //     arr[row][curr_col--] = cnt++;
        // }
    }

    for (int row = 1; row < n; row++) {
        int curr_row = row;
        int curr_col = m - 1;

        while(curr_row < n && curr_col >= 0){
            arr[curr_row][curr_col] = cnt;

            cnt++;
            curr_row++;
            curr_col--;
        }
        // for (int col = m - 1; curr_row < n && col>=0; curr_row++, col--) {
        //     arr[curr_row][col] = cnt++;
        // }
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}