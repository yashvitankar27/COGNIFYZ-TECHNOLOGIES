#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

string cleanup(string str) {
    string cleaned = "";
    for (char c : str) {
        if (isalnum(c)) {
            cleaned += toupper(c);
        }
    }
    return cleaned;
}

bool isPalindrome(string str) {
    string cleaned = cleanup(str);
    int len = cleaned.length();
    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a word or phrase: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The input is a palindrome." << endl;
    } else {
        cout << "The input is not a palindrome." << endl;
    }

    return 0;
}