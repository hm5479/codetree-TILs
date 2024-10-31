#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int cnt[9] = {0,};

    for(int el : arr)
        cnt[el-1]++;
    
    for(int el : cnt)
        cout << el << '\n';
}