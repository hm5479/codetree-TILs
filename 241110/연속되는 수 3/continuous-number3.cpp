#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int tmp = 1, ans = 0;

    for (int i = 0; i < n; i++) {
        if (i != 0 && arr[i] * arr[i - 1] > 0) {
            tmp++;
        } else
            tmp = 1;

        ans = max(tmp, ans);
    }

    cout << ans;
}