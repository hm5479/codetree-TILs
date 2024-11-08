#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

class Student {
   public:
    int heigth, weight, num;

    Student() {}

    void setStudent(int h, int w, int n) {
        heigth = h;
        weight = w;
        num = n;
    }

    void print() { cout << heigth << " " << weight << " " << num; }
};

bool compare(Student s1, Student s2) {
    if (s1.heigth != s2.heigth)
        return s1.heigth > s2.heigth;
    if(s1.weight != s2.weight)
        return s1.weight > s2.weight;
    return s1.num < s2.num;

}

int main() {

    int n;
    cin >> n;
    Student arr[n];
    
    for(int i=0; i<n; i++){
        int h, w;
        cin >> h >> w;
        arr[i].setStudent(h,w,i+1);
    }

    sort(arr,arr+n,compare);

    for(Student el : arr){
        el.print();
        cout << endl;
    }
}