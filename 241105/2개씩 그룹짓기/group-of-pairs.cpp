#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2*n];
    for(int i=0; i<2*n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+2*n);
    int max=0;
    for(int i=0; i<n; i++){
        int sum = arr[i] + arr[2*n-1-i];
        if(sum>max) max = sum;
    }

    cout << max;
}