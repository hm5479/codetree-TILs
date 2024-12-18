#include <iostream>
using namespace std;

#define OFFSET 100
#define MAX_M 200
#define LENGTH 8

int arr[MAX_M][MAX_M] = {0};

void paintArr(int row, int col) {
    for (int i = row; i < row + LENGTH; i++) {
        for (int j = col; j < col + LENGTH; j++) {
            arr[i][j] = 1;
        }
    }
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int r, c;
        cin >> r >> c;
        r += OFFSET;
        c += OFFSET;
        paintArr(r, c);
    }

    int ans = 0;
    for (int i = 0; i < MAX_M; i++) {
        for (int j = 0; j < MAX_M; j++)
            if (arr[i][j] == 1) ans++;
    }

    cout << ans;
}