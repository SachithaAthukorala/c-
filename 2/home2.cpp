#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);


    reverse(input.begin(), input.end());
    transform(input.begin(), input.end(), input.begin(), ::tolower);


    cout << "Reversed string: " << input << endl;


    return 0;
}

