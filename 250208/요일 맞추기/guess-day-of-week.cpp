#include <iostream>
using namespace std;

int getDays(int m, int d) {
    int numOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = d;
    for (int i = 1; i < m; i++)
        day += numOfDays[i];
    return day;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int day = getDays(m2, d2) - getDays(m1, d1);
    
    int a = day % 7;
    if (a < 0)
        a += 7;

    switch (a) {
        case 0:
            cout << "Mon";
            break;
        case 1:
            cout << "Tue";
            break;
        case 2:
            cout << "Wed";
            break;
        case 3:
            cout << "Thu";
            break;
        case 4:
            cout << "Fri";
            break;
        case 5:
            cout << "Sat";
            break;
        case 6:
            cout << "Sun";
            break;
    }
}