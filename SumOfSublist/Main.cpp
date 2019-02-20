#include <iostream>
#include <vector>
using namespace std;

vector<int> SubArrSum(int arr[], int size, int start, int end, int &sum) {
    vector<int> SubArraySummand;

    if (start < 0 || end < 0 || start > size || end > size || start > end) {
        cout << "Program terminated!" << endl;
        exit(0);
    }

    for (int i = start; i < end; i++){
        sum += arr[i];
        SubArraySummand.push_back(arr[i]);
    }

    return SubArraySummand;
}

int main()
{
    int L[] = { 1, 2, 3, 4, 5, };
    int size = sizeof(L) / sizeof(*L);
    vector<int> Summand;
    int start = 1, end = 3, sum = 0;

    Summand = SubArrSum(L, size, start, end, sum);

    cout << "Content of list L: ";
    for (int i = 0; i < size; i++) {
        cout << L[i] << " ";
    }

    cout << "\nThe sum is: " << sum;
    cout << "\nThe summands are: ";
    
    size = Summand.size();
    for (int i = 0; i < size; i++) {
        cout << Summand[i] << " ";
    }

    cout << endl;
    return 0;
}