#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;
    for (int i = 0; i < n; i++) { // 시작점 완전탐색
        if(i+k-1>=n) break;

        int sum = 0;
        for(int j=i; j<i+k; j++)
            sum += arr[j];
        
        ans = max(ans,sum);
    }

    cout << ans;
}