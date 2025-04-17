#include <iostream>
using namespace std;

int fmax(int arr[], int size);

int main() {
    int mArray[] = {3, 5, 7, 2, 8, -1, 4}; // Example array
    int size = sizeof(mArray) / sizeof(mArray[0]); 

    int maxElement = fmax(mArray, size);
    cout << "The largest element in the array is: " << maxElement << endl;

    return 0;
}

int fmax(int arr[], int size) {
    int max = arr[0]; 

    for (int i = 1; i < size; i++) { 
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    return max; 
}
