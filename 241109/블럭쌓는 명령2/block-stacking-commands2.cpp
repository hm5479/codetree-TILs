#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int checked[n] = {0};
    
    while(k--){
        int a, b;
        cin >> a >> b;
        for(int i=a; i<=b; i++){
            checked[i]++;
        }
    }

    int max = checked[0];
    for(int el : checked){
        if(max < el)
            max = el;
    }
    cout << max;
}