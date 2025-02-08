#include <algorithm>
#include <iostream>
using namespace std;

class Student {
   public:
    int tall, weight, num;
    Student() {};
    Student(int tall, int weight, int num) : tall(tall), weight(weight), num(num) {};
    void print() { cout << tall << " " << weight << " " << num << '\n'; }
    bool operator<(Student right) {
        if (this->tall == right.tall)
            return this->weight > right.weight;
        return this->tall < right.tall;
    }
};

int main() {
    int N;
    cin >> N;
    Student* arr = new Student[N];

    for (int i = 0; i < N; i++) {
        int t, w;
        cin >> t >> w;
        arr[i] = Student(t, w, i + 1);
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
        arr[i].print();

    delete[] arr;
}