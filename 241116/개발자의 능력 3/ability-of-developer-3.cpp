#include <cmath>
#include <iostream>
using namespace std;

#define NUM 6

int main() {
    int arr[NUM];
    int tot = 0;

    for (int i = 0; i < NUM; i++) {
        cin >> arr[i];
        tot += arr[i];
    }

    int ans = pow(2,31)-1;
    for (int i = 0; i < NUM - 2; i++) {
        for (int j = i + 1; j < NUM - 1; j++) {
            for (int k = j + 1; k < NUM; k++) {
                int sumA = arr[i] + arr[j] + arr[k];
                int sumB = tot - sumA;

                int diff = abs(sumA-sumB);
                if(ans>diff) ans = diff;
            }
        }
    }

    cout << ans;
}