#include <iostream>
using namespace std;

int main() {
    int list[] = { 100, 200, 150, 80 };
    int size = sizeof(list) / sizeof(*list);
    int total = 0, wghtLim = 200;

    for (int i = 0; i < size; i++) {
        total += list[i];
    }

    int NumOfBoatsNeeded = total / wghtLim;
    int remaining = total % wghtLim;

    if (remaining == 0) {
        cout << "Number of boats needed is: " << NumOfBoatsNeeded << endl;
    } else {
        cout << "Number of boats needed is: " << NumOfBoatsNeeded + 1 << endl;
    }
    return 0;
}