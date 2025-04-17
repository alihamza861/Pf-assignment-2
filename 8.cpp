#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countw(const string& filename) {
    ifstream file(filename); 
    if (!file) {
        cout << "Error" << filename << "'" << endl; 
        return -1; 
    }

    string word;
    int count = 0;

    while (file >> word) {
        count++; 
    }

    return count; 
}

int main() {
    string filename = "example.txt"; 
    int wordCount = countw(filename); 

    if (wordCount != -1) {
        cout << "The number of words in the file '" << filename << "' is: " << wordCount << endl;
    }

    return 0;
}
