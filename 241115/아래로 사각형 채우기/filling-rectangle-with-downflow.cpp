#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];

    int cnt = 1;
    for(int col = 0; col<n; col++){
        for(int row = 0; row<n; row++){
            arr[row][col]= cnt++;
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}