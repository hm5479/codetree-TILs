#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

class Student {
   public:
    string name;
    int han, eng, math;

    Student() {}

    void setStudent(string n, int h, int e, int m) {
        name = n;
        han = h;
        eng = e;
        math = m;
    }

    void print() { cout << name << " " << han << " " << eng << " " << math; }
};

bool compare(Student s1, Student s2) {
    int sum1 = s1.eng + s1.han + s1.math;
    int sum2 = s2.eng + s2.han + s2.math;
    return sum1 < sum2;

}

int main() {

    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++) {
        string n;
        int h, e, m;
        cin >> n >> h >> e >> m;
        arr[i].setStudent(n, h, e, m);
    }

    sort(arr, arr + n, compare);
    for (Student p : arr) {
        p.print();
        cout << endl;
    }
}