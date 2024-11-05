#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    string inp;
    cin >> inp;
    sort(inp.begin(),inp.end());

    cout << inp;
}