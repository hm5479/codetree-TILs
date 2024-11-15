#include <cmath>
#include <iostream>
using namespace std;

#define OFFSET 1000
#define MAX_M 2000

int x[6];
int y[6];
int arr[MAX_M][MAX_M] = {0};

void paintArr() {
    for (int i = x[0]; i < x[1]; i++) {
        for (int j = y[0]; j < y[1]; j++) {
            arr[i][j] = 1;
        }
    }
}

void deleteArr() {
    for (int i = x[2]; i < x[3]; i++) {
        for (int j = y[2]; j < y[3]; j++) {
            arr[i][j] = 0;
        }
    }
}

void findArr() {

    int minR = -1, minC;    
    for (int i = 0; i < MAX_M; i++) {
        for (int j = 0; j < MAX_M; j++)
            if (arr[i][j] == 1) {
                minR = i;
                minC = j;
                break;
            }
        if(minR != -1) break;
    }

    x[4] = minR;
    x[5] = minR;
    y[4] = minC;
    y[5] = minC;

    for (int i = 0; i < MAX_M; i++) {
        for (int j = 0; j < MAX_M; j++) {
            if (arr[i][j] == 1) {
                x[5] = max(i, x[5]);
                x[4] = min(i, x[4]);

                y[5] = max(j, y[5]);
                y[4] = min(j, y[4]);
            }
        }
    }
}

int main() {
    for (int i = 0; i < 3; i++){
        cin >> x[i] >> y[i];
        x[i]+=OFFSET;
        y[i]+=OFFSET;
    }

    // 첫번째 직사각형 색칠
    paintArr();

    // 두번째 직사각형으로 덮기
    deleteArr();

    // 최소 직사각형의 좌측하단, 우측상단 좌표 찾기
    findArr();

    int ans = (x[5] - x[4] + 1) * (y[5] - y[4] + 1);
    cout << ans;
}