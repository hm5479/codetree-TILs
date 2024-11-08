#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

class Point {
   public:
    int x, y, num;
    Point(){};

    void setPoint(int x, int y, int num) {
        this->x = x;
        this->y = y;
        this->num = num;
    }

    int getInstance() {
        if (x < 0 && y >= 0) return -x + y;
        if (x >= 0 && y < 0) return x + -y;
        if (x < 0 && y < 0) return -(x + y);
        return x + y;
    }
};

bool compare(Point p1, Point p2) {
    int i1 = p1.getInstance();
    int i2 = p2.getInstance();
    if (i1 != i2)
        return i1 < i2;
    return p1.num < p2.num;
}

int main() {
    int n;
    cin >> n;
    Point arr[n];

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        arr[i].setPoint(x,y,i+1);
    }
    sort(arr,arr+n,compare);

    for(Point p : arr){
        cout << p.num;
        cout << endl;
    }
}