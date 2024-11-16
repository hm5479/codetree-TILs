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
                bool flag = false;

                if (i >= arr[0] - 2 && i <= arr[0] + 2 
                || j >= arr[1] - 2 && j <= arr[1] + 2 
                || k >= arr[2] - 2 && k <= arr[2] + 2) flag = true;

                if (flag) cnt++;
            }
        }
    }
    cout << cnt;
}
