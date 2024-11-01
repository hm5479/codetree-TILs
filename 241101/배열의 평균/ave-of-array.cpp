#include <iostream>
using namespace std;

int main() {
    int rowSize = 2, colSize = 4;
    int arr[rowSize][colSize];
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) cin >> arr[i][j];
    }

    int rowSums[rowSize];

    for (int i = 0; i < rowSize; i++) {
        int rowSum = 0;
        for (int j = 0; j < colSize; j++) {
            rowSum += arr[i][j];
        }
        rowSums[i] = rowSum;
    }

    int colSums[colSize];

    for (int i = 0; i < colSize; i++) {
        int colSum = 0;
        for (int j = 0; j < rowSize; j++) {
            colSum += arr[j][i];
        }
        colSums[i] = colSum;
    }

    int totSum;

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            totSum += arr[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);
    
    for (int sum : rowSums) cout << sum / (double)colSize << " ";
    cout << '\n';
    for(int sum : colSums) cout << sum/(double)rowSize << " ";
    cout << '\n';
    cout << totSum/((double)colSize*rowSize);
}