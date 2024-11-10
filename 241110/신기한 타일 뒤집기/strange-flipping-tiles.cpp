#include <algorithm>
#include <iostream>
using namespace std;

// to white (-1)
int Left(int tile[], int x, int now) {
    while (x--) {
        tile[now--] = -1;
    }
    return ++now;
}

// to black (1)
int Right(int tile[], int x, int now) {
    while (x--) {
        tile[now++] = 1;
    }
    return --now;
}

int main() {
    int n, now = 1000000;
    cin >> n;
    int tiles[2000000] = {0};
    
    int x;
    string dir;
    while (n--) {
        cin >> x >> dir;

        if (dir == "L")
            now = Left(tiles, x, now);
        else
            now = Right(tiles, x, now);
    }

    int black = 0, white = 0;

    for (int el : tiles) {
        if (el == -1)
            white++;
        else if (el == 1)
            black++;
    }

    cout << white << " " << black;
}