#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int max = 0;
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        if (i != 0 && arr[i] == arr[i - 1])
            cnt++;
        else
            cnt = 1;
        if (max < cnt) max = cnt;
    }

    cout << max;
}