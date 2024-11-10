#include <iostream>
using namespace std;

int getDays(int m, int d) {
    int dayOfMonth[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int days = 0;
    for (int i = 1; i < m; i++) {
        days += dayOfMonth[i];
    }
    days += d;
    return days;
}

int main() {
    int m1, d1, m2, d2;
    string yoil;
    cin >> m1 >> d1 >> m2 >> d2 >> yoil;
    string yoils[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int days1 = getDays(m1, d1);
    int days2 = getDays(m2, d2);

    int diff = days2 - days1;
    int yoilNum;

    for (int i = 0; i < 7; i++) {
        if (yoil == yoils[i]) yoilNum = i;
    }

    int aaa = (diff-yoilNum);
    int tot = (diff-yoilNum) / 7 ;
    if(aaa%7==0) tot++;

    cout << tot;
}