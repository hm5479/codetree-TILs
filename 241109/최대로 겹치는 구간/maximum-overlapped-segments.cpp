#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int checked[200] = {0};

    while(n--){
        int x1, x2;
        cin >> x1 >> x2;
        x1+=100;
        x2+=100;

        for(int i=x1; i<x2; i++)
            checked[i]++;
    }
    
    int max = checked[0];
    for(int el : checked)
        if(max < el)
            max = el;

    cout << max;


}