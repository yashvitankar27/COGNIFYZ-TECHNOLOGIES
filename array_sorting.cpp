#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void sortAscending(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

void sortDescending(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
}

int main() {
    int n, choice;
    vector<int> arr;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter 1 for ascending order or 2 for descending order: ";
    cin >> choice;

    if (choice == 1) {
        sortAscending(arr);
        cout << "Sorted array in ascending order: ";
        printArray(arr);
    } else if (choice == 2) {
        sortDescending(arr);
        cout << "Sorted array in descending order: ";
        printArray(arr);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}