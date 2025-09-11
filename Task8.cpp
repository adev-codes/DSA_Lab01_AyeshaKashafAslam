#include <iostream>
#include <string>
using namespace std;

// Function to find first occurrence of a substring in a string
int find_first_occurrence(const string& text, const string& pattern) {
    if (pattern.empty()) {
        return -1; // Edge case: empty pattern
    }

    int main_length = text.size();
    int sub_len = pattern.size();

    // Naive substring search
    for (int i = 0; i <= main_length - sub_len; ++i) {
        int j = 0;
        while (j < sub_len && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == sub_len) {
            return i; // Found match starting at index i
        }
    }
    return -1; // Pattern not found
}

int main() {
    string mainString, subString;

    // Ask user for main string
    cout << "Enter the main text: ";
    getline(cin, mainString);

    // Ask user for pattern
    cout << "Enter the pattern to search: ";
    getline(cin, subString);

    // Call function
    int index = find_first_occurrence(mainString, subString);

    // Output result
    if (index == -1) {
        cout << "Pattern not found in the text." << endl;
    } else {
        cout << "Pattern found at index: " << index << endl;
    }

    return 0;
}
