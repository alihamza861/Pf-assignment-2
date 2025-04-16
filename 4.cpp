#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void writeToFile(const string& text);

int main() {
    string input;

    
    cout << "Enter text to save to file: ";
    getline(cin, input);

    writeToFile(input);

    return 0;
}

void writeToFile(const string& text) {
    ofstream outFile("output.txt");

    
    if (outFile.is_open()) {
        outFile << text;
        outFile.close(); 
        cout << "Text has been written to output.txt" << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }
}
