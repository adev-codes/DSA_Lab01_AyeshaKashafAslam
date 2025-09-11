#include <iostream>
#include <vector>
using namespace std;
//Function that finds all the indices where a given key appears in the array
vector<int> find_all_indices(const int* arr, int size, int key) {
    vector<int> indices;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int size, key;

    // Input: size of array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Handle empty array case
    if (size <= 0) {
        cout << "The array is empty. Program terminated." << endl;
        return 0;
    }

    // Input: array elements
    int* array = new int[size];
    cout << "Enter " << size << " element(s): ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    // Input: key to search
    cout << "Enter the key to search: ";
    cin >> key;

    // Process: find indices of occurrences
    vector<int> found_indices = find_all_indices(array, size, key);

    // Output: results
    if (found_indices.empty()) {
        cout << "Key not found in the array." << endl;
    } else {
        cout << "Key found at index/indices: ";
        for (int index : found_indices) {
            cout << index << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    delete[] array;
    return 0;
}
