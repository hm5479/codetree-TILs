#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    // 시뮬레이션
    int ans = 0;
    while (A != C || B != D) {
        ans++;
        if (B == 59) {
            B = 0;
            A++;
        } else {
            B++;
        }
    }

    cout << ans;
}