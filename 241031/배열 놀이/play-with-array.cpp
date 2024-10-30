#include <iostream>
using namespace std;

void case2(int arr[], int key, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << "0\n";
}

void case3(int arr[], int key, int key2) {
    for (int i = key - 1; i <= key2 - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num, key, key2;

    for (int i = 0; i < q; i++) {
        cin >> num >> key;
        if (num == 3) cin >> key2;

        switch (num) {
            case 1:
                cout << arr[key - 1] << '\n';
                break;
            case 2:
                case2(arr, key, n);
                break;
            case 3:
                case3(arr, key, key2);
                break;
        }
    }
}