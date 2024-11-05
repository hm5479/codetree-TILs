#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

class NextLevel {
   public:
    string ID;
    int level;

    NextLevel(string ID, int level) {
        this->ID = ID;
        this->level = level;
    }
};

int main() {
    NextLevel codeTree = NextLevel("codetree", 10);
    
    string id;
    int lv;
    cin >> id >> lv;

    NextLevel user = NextLevel(id,lv);
    cout << "user " << codeTree.ID << " lv " << codeTree.level << endl;
    cout << "user " << user.ID << " lv " << user.level << endl;

}