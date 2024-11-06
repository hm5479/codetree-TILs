#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int elapsed_day = 1;
    int endOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (true) {
$0
        if (d1 == d2 && m1 == m2) break;

        d1++;
        elapsed_day++;

        if(d1 > endOfMonth[m1]){
            d1 = 1;
            m1++;
        }
    }

    cout << elapsed_day;
}