#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int currHr = a;
    int currMin = b;
    int elapMin = 0;
    while(true){
        currMin++;
        elapMin++;

        if(currMin==60){
            currHr++;
            currMin = 0;
        }
        
        if(currMin == d && currHr == c)
            break;
        
    }

    cout << elapMin;
}