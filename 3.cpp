#include <iostream>
#include <string>

using namespace std;


int countVowels(const string& str);

int main() {
    string input;

    
    cout << "Enter a string: ";
    getline(cin, input);

    
    int vowelCount = countVowels(input);

    
    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}

int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}
