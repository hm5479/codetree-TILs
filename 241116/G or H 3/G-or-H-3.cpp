#include <cmath>
#include <iostream>
using namespace std;

#define MAX_M 10000

int main() {
    int n, k;
    cin >> n >> k;

    int personIndex[n];
    char personGorH[n];

    for (int i = 0; i < n; i++) {
        cin >> personIndex[i];
        cin >> personGorH[i];
    }

    int person[MAX_M] = {0};

    for (int i = 0; i < n; i++) {
        if (personGorH[i] == 'G') {  // 1점
            person[personIndex[i] - 1] = 1;
        } else if (personGorH[i] == 'H') {  // 2점
            person[personIndex[i] - 1] = 2;
        }
    }

    k++;
    int ans = 0;
    for (int i = 0; i < MAX_M; i++) {
        if (i + k - 1 >= MAX_M) break;

        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += person[j];
        }
        ans = max(ans, sum);
    }
    cout << ans;
}