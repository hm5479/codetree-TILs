#include <cmath>
#include <iostream>
using namespace std;

#define MAX_M 10000

int main() {
    int n;
    int arr[n];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            
            int sum = 0;
            for (int k = i; k <= j; k++)
                sum += arr[k];

            int average = sum / (j - i + 1);

            for (int k = i; k <= j; k++)
                if(arr[k]== average){
                    cnt++;
                    break;
                }
        }
    }

    cout << cnt;
}