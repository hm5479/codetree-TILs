#include <algorithm>
#include <iostream>
using namespace std;

int search(int* arr, int value, int size) {
    int i = 0;
    for (i; i < size; i++)
        if (arr[i] == value)
            return i + 1;
    return -1;
}

int main() {
    int N;
    cin >> N;
    int* sortArr = new int[N];
    int* arr = new int[N];
    int* ans = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sortArr[i] = arr[i];
    }

    sort(sortArr, sortArr + N);

    for (int i = 0; i < N; i++) {
        int index = search(sortArr, arr[i], N);
        while (search(ans, index, N) != -1)  // 중복 인덱스가 있으면
            index++;
        ans[i] = index;
    }

    for (int i = 0; i < N; i++)
        cout << ans[i] << " ";

    delete[] ans;
    delete[] arr;
    delete[] sortArr;
}