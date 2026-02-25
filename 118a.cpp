#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    string vowels = "AEIOUYaeiouy";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        bool isVowel = false;
        for (int j = 0; j < vowels.length(); j++) {
            if (c == vowels[j]) {
                isVowel = true;
                break;
            }
        }
        if (!isVowel) {
            result += '.';
            if (c >= 'A' && c <= 'Z') {
                result += (c - 'A' + 'a');
            }
            else {
                result += c;
            }
        }
    }

    cout << result << endl;

    return 0;
}