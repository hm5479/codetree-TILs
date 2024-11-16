#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = (int)pow(2,31)-1;
    for (int i = 0; i < n; i++) {  // 완전탐색
        int min = 0;
        for (int j = 0; j < n; j++) { 
            int distance = abs(j - i);
            min += arr[j]*distance;
        }
        if(ans>min) ans = min;
    }

    cout << ans;
}