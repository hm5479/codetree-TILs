#include <cmath>
#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int ans = 0;
    for (int i = 0; i < input.length() - 1; i++) {
        if (input[i] == '(') {
            for (int j = i + 1; j < input.length(); j++) 
                    if (input[j] == ')')
                        ans++;
        }
    }
    cout << ans;
}