#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[3];
    for (int i = 0; i < 3; i++) cin >> arr[i];

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (abs(i-arr[0]) <= 2 || abs(j-arr[1]) <=2 ||
                abs(k-arr[2] <= 2))
                    cnt++;
            }
        }
    }
    cout << cnt;
}
