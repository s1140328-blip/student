#include <iostream>
using namespace std;

int main() {
    int grade[5] = {30, 50, 70, 20, 80};
    int sum = 0;
    double avg = 0.0;

    // 計算總和
    for (int i = 0; i < 5; i++) {
        sum += grade[i];
    }

    // 計算平均值
    avg = sum / 5.0;

    cout << "總和 = " << sum << endl;
    cout << "平均 = " << avg << endl;

    return 0;
}
