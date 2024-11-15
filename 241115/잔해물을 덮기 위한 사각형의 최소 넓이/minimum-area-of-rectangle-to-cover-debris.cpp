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

bool findArr() {

    int firstR = 0, firstC = 0;    
    bool flag = false;

    for (int i = 0; i < MAX_M; i++) {
        for (int j = 0; j < MAX_M; j++)
            if (arr[i][j] == 1) {
                firstR = i;
                firstC = j;
                flag = true;
                break;
            }
        if(flag) break;
    }
    if(!flag) return false;

    x[4] = firstR;
    x[5] = firstR;
    y[4] = firstC;
    y[5] = firstC;


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
    return true;
}

int main() {
    for (int i = 0; i <= 3; i++){
        cin >> x[i] >> y[i];
        x[i]+=OFFSET;
        y[i]+=OFFSET;
    }

    // 첫번째 직사각형 색칠
    paintArr();

    // 두번째 직사각형으로 덮기
    deleteArr();

    int ans;
    // 최소 직사각형의 좌측하단, 우측상단 좌표 찾기
    if(findArr())
        ans = (x[5] - x[4] + 1) * (y[5] - y[4] + 1);
    else
        ans = 0;
    
    cout << ans;
}