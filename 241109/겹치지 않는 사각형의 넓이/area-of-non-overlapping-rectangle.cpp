#include <iostream>
#define OFFSET 1000
using namespace std;

int main() {
    int x[6];
    int y[6];
    int checked[2000][2000] = {0};

    cin >> x[0] >> y[0] >> x[1] >> y[1];
    cin >> x[2] >> y[2] >> x[3] >> y[3];
    cin >> x[4] >> y[4] >> x[5] >> y[5];

    for (int i = 0; i < 6; i++) {
        x[i] += OFFSET;
        y[i] += OFFSET;
    }

    for(int i=x[0]; i<x[1]; i++)
        for(int j=y[0]; j<y[1]; j++)
            checked[i][j] = 1;
    
    for(int i=x[2]; i<x[3]; i++)
        for(int j=y[2]; j<y[3]; j++)
            checked[i][j] = 1;

    for(int i=x[4]; i<x[5]; i++)
        for(int j=y[4]; j<y[5]; j++)
            checked[i][j] = 0;


    int area = 0;

    for(int i=x[0]; i<x[1]; i++)
        for(int j=y[0]; j<y[1]; j++)
            if(checked[i][j])
                area++;
    
    for(int i=x[2]; i<x[3]; i++)
        for(int j=y[2]; j<y[3]; j++)
            if(checked[i][j])
            area++;

    cout << area;

}