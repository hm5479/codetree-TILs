#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if(i==j) cnt++;

            else {
                int sum = 0;
                for (int k = i; k <= j; k++)
                    sum += arr[k];

                double average = (double) sum / (double) (j - i + 1);
                for (int k = i; k <= j; k++)
                    if((double)arr[k] == average){
                        cnt++;
                        break;
                    }
            }
        }
    }

    cout << cnt;
}