#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

class Person {
   public:
    string name;
    int heigth, weight;

    Person() {}

    void setPerson(string n, int h, int w) {
        name = n;
        heigth = h;
        weight = w;
    }

    void print(){
        cout << name << " " << heigth << " " << weight;
    }
};

bool compare(Person p1, Person p2) { return p1.heigth < p2.heigth; }

int main() {
    int n;
    cin >> n;
    Person arr[n];
    for(int i=0; i<n; i++){
        string n;
        int h, w;
        cin >> n >> h >> w;
        arr[i].setPerson(n,h,w);
    }

    sort(arr,arr+n,compare);
    for(Person p : arr){
        p.print();
        cout << endl;
    } 
}