#include <iostream>
using namespace std;

void reverse(const char* str);

int main() {
    const char* string = "Ali hamza"; 
    cout << "Original string: " << string << endl;
    
    cout << "Reversed string: ";
    reverse(string); 
    cout << endl;

    return 0;
}

void reverse(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i]; 
    }
}
