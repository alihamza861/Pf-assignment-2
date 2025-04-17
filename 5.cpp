#include <iostream>
using namespace std;


void printch(const char* str);

int main() {
    const char* string = "Hello, World!"; 
    printch(string); 
    return 0;
}

void printch(const char* str) {
    while (*str) { 
        cout << *str << endl; 
        str++; 
}
