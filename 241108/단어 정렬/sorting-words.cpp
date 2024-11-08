#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(string el : arr) cout << el << endl;

}