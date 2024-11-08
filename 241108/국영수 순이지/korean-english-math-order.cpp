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
    if(s1.han == s2.han){
        if(s1.eng == s2.eng)
            return s1.math > s2.math;
        return s1.eng > s2.eng;
    }
    return s1.han > s2.han;
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