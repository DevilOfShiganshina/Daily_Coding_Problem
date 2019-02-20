#include <iostream>
using namespace std;

void Partition(int arr[], int size, int pivot) {
    int count = 0, temp;
    for (int i = 0; i < size; i++) {
        if (arr[i] < pivot) {
            temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    } for (int i = 0; i < size; i++) {
        if (arr[i] == pivot) {
            temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    } for (int i = 0; i < size; i++) {
        if (arr[i] > pivot) {
            temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int list[] = { 9, 12, 3, 5, 14, 10, 10 };
    int size = sizeof(list) / sizeof(*list);
    int pivot = 10;

    cout << "The original array: ";
    PrintArray(list, size);

    Partition(list, size, pivot);

    cout << "The partitioned array: ";
    PrintArray(list, size);

    return 0;
}