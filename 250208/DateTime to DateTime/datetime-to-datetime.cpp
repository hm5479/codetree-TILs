#include <iostream>
using namespace std;

int getDays(int m, int d) {
    int numOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = d;
    for (int i = 1; i < m; i++)
        day += numOfDays[i];
    return day;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;  // 일 시간 분

    int day = getDays(11, A) - getDays(11, 11);
    int ans = (day * 24 * 60) - (11 * 60 + 11) + (B * 60 + C);
    if (ans < 0)
        cout << -1;
    else
        cout << ans;
}