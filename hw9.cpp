#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {  // 外層迴圈
        for (int j = 0; j < 5; ++j) {  // 內層迴圈
            cout << "* ";  // 在每個位置印出一顆星號
        }
        cout << endl;  // 換行
    }
    return 0;
}