#include <iostream>

using namespace std; // Use the standard namespace

// Function declaration
void copyArray(int* source, int* destination, int size);

int main() {
    const int size = 5; // Size of the array
    int sourceArray[size] = {1, 2, 3, 4, 5}; // Source array
    int destinationArray[size]; // Destination array

    // Copying the source array to the destination array
    copyArray(sourceArray, destinationArray, size);

    // Displaying the copied array
    cout << "Copied Array: ";
    for (int i = 0; i < size; ++i) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function definition
void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}
