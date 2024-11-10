#include <iostream>
using namespace std;

int main() {
    int digit[8] = {0};
    int n, cnt = 0;
    cin >> n;

    while(n>=10){
        digit[cnt] = n%10;
        cnt++;
        n/=10;
    }
    digit[cnt] = n;

    int num = 0;
    for(int i=cnt; i>=0; i--){
        num = num*2 + digit[i];
    }

    cout << num;
}