#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[2 * N];
    for (int i = 0; i < 2 * N; i++)
        cin >> arr[i];

    sort(arr, arr + 2 * N);

    int max = 0;
    for (int i = 0; i < N; i++) {
        int compare = arr[i] + arr[2 * N - 1 - i];
        if (max < compare)
            max = compare;
    }

    cout << max;

    delete[] arr;
}