#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[4] = {1, 0, -1, 0};
    int y[4] = {0, -1, 0, 1};

    int currX = 0;
    int currY = 0;

    while (n--) {
        char dir;
        int dis;
        cin >> dir >> dis;

        if (dir == 'E')
            dir = 0;
        else if (dir == 'S')
            dir = 1;
        else if (dir == 'W')
            dir = 2;
        else if (dir == 'N')
            dir = 3;

        currX += x[dir] * dis;
        currY += y[dir] * dis;
    }

    cout << currX << " " << currY;
}