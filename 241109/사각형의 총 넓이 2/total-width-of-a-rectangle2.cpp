#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    const int OFFSET = 100;
    int checked[200][200];

    while(n--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=OFFSET;
        x2+=OFFSET;
        y1+=OFFSET;
        y2+=OFFSET;
        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                checked[i][j]=1;
            }
        }
    }

    int sum = 0;
    for(int i=0; i<200; i++){
        for(int j=0; j<200; j++){
            if(checked[i][j] == 1)
                sum++;
        }
    }
    cout << sum;

}