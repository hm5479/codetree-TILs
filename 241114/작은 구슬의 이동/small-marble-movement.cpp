#include <iostream>
using namespace std;

bool inRange(int row, int col, int n) { return row >= 0 && row < n && col >= 0 && col < n; }

int getDir(char d) {
    switch (d) {
        case 'U':
            return 1;
        case 'D':
            return 2;
        case 'R':
            return 0;
        case 'L':
            return 3;
    }
    return -1;
}

int main() {
    int n, t, r, c;
    char d;
    cin >> n >> t;
    cin >> r >> c >> d;

    // RIGHT, UP, DOWN, LEFT
    int dr[] = {0, -1, 1, 0};
    int dc[] = {1, 0, 0, -1};

    int arr[n][n];

    // 0 <= r, c < n 으로 조정
    int row = r - 1;
    int col = c - 1;
    int dir = getDir(d);
    while (t--) {
        int nextR = row + dr[dir];
        int nextC = col + dc[dir];

        if (!inRange(nextR, nextC, n))
            dir = 3 - dir;
        else {
            row = nextR;
            col = nextC;
        }
    }

    cout << row + 1 << " " << col + 1;
}