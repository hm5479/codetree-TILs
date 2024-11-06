#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2, eladay;
    cin >> m1 >> d1 >> m2 >> d2;
    int eod[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int tot1 = 0, tot2 = 0;
    for (int i = 1; i < m1; i++) tot1 += eod[i];
    tot1 += d1;
    for (int i = 1; i < m2; i++) tot2 += eod[i];
    tot2 += d2;

    eladay = tot2 - tot1;

    string day[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    if (eladay < 0)
        cout << day[eladay % 7 + 7];
    else
        cout << day[eladay % 7];
}