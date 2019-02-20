#include <iostream>
#include <vector>
using namespace std;

vector<int> SortedSquare(int arr[], int size){
    int negPivot, posPivot;
    vector<int> SortedList;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            posPivot = i;
            negPivot = i - 1;
            break;
        }
    }

    while (negPivot != -1 && posPivot != size){
        int posSquared = arr[posPivot] * arr[posPivot];
        int negSquared = arr[negPivot] * arr[negPivot];

        if (posSquared < negSquared) {
            SortedList.push_back(posSquared);
            posPivot++;
        } else {
            SortedList.push_back(negSquared);
            negPivot--;
        }
    }

    while (posPivot < size) {
        int posSquared = arr[posPivot] * arr[posPivot];
        SortedList.push_back(posSquared);
        posPivot++;

    }

    while (negPivot > -1){
        int negSquared = arr[negPivot] * arr[negPivot];
        SortedList.push_back(negSquared);
        negPivot--;
    }

    return SortedList;
}

main()
{
    int list[] = { -9, -2, 0, 2, 3 };
    int size = sizeof(list) / sizeof(*list);
    vector<int> SortedLst;

    cout << "The original list is: ";
    for (int i = 0; i < size; i++) {
        cout << list[i] << " ";
    }

    SortedLst = SortedSquare(list, size);

    cout << "\nThe sorted list is: ";
    for (int i = 0; i < size; i++) {
        cout << SortedLst[i] << " ";
    }

    cout << endl;
    return 0;
}