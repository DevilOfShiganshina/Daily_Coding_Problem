#include <iostream>
using namespace std;

bool FixedPoint(int arr[], int size, int &index) {
	int start = 0, end = size - 1, mid;

	while (start <= end) {
		mid = (start + end) / 2;

		if (arr[mid] == mid) {
			index = mid;
			return true;
		} else if (arr[mid] < mid) {
			start = mid + 1;
		} else if (arr[mid] > mid) {
			end = mid - 1;
		}
	}

	return false;
}

void PrintArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	} cout << endl;
}

int main()
{
	int list[] = { -6, 0, 2, 40 };
	int size = sizeof(list) / sizeof(*list);
	int index = -1;

	cout << "The original array is: ";
	PrintArray(list, size);

	if (FixedPoint(list, size, index) == true) {
		cout << "The fixed point is: " << index << endl;
	} else {
		cout << "List contains no fixed points!" << endl;
	}

	int list2[] = { -1, 5, 7, 8 };
	size = sizeof(list2) / sizeof(*list2);
	cout << "The original array is: ";
	PrintArray(list2, size);

	if (FixedPoint(list2, size, index) == true) {
		cout << "The fixed point is: " << index << endl;
	} else {
		cout << "List contains no fixed points!" << endl;
	}

	return 0;
}
