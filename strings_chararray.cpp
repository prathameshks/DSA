#include <iostream>
using namespace std;

void reverse(char s[], int n) {
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}

bool palindrome(char s[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i -1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char ch[10];
    cin >> ch;
    int n = 0;
    while (ch[n++] != '\0') {
    }

    cout << n - 1;
    // reverse(ch, 4);
    cout << palindrome(ch,5);

    return 0;
}