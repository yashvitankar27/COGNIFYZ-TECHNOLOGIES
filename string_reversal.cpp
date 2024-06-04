#include <iostream>
#include <string>

using namespace std;


string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string original;
    cout << "Enter a string: ";
    getline(cin, original);  

    string reversed = reverseString(original);

    cout << "The reversed string is: " << reversed << endl;

    return 0;
}