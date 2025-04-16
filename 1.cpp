#include <iostream>
using namespace std;


void arry(int arr[5]);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    array(arr);
    return 0;
}


void array(int arr[5]) {
  
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}
