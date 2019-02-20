#include <iostream>
using namespace std;

void SortIndex(int arr[], int size, int start, int end) {
    if (start < 0 || end < 0 || start > size || end > size || start > end) {
        cout << "Program terminated!" << endl;
        exit(0);
    }

    for (int i = start; i < end; i++) {
        for (int j = i; j < end; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int List[] = { 5, 4, 3, 2, 1 };
    int size = sizeof(List) / sizeof(*List);
    int start = 0;
    int end = 3;

    cout << "Start: " << start << endl;
    cout << "End: " << end << endl;
    cout << "Origin array is: ";
    PrintArray(List, size);
    SortIndex(List, size, start, end);
    cout << "\nSorted array is: ";
    PrintArray(List, size);
    cout << endl;
    
    return 0;
}