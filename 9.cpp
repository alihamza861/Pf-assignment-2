#include <iostream>
using namespace std;

bool isPalindrome(const char* str);

int main() {
    const char* str = "radar"; 
    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

bool isPalindrome(const char* str) {
    int left = 0; 
    int right = 0;

    while (str[right] != '\0') {
        right++; 
    }
    right--;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true;
}
