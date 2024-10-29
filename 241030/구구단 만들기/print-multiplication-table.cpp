#include <iostream>
using namespace std;

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    int even[10]; 


    for(int el=b; el>=a; el--){
        if (el%2==0){
            even[cnt] = el;
            cnt++;
        }
    }

    for(int i=1; i<=9; i++){
        for(int j=0; j<cnt; j++){
            cout << even[j] << " * " << i << " = " << even[j]*i;
            if(j!=cnt-1) cout << " / ";
        }
        cout << endl;
    }
}