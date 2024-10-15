#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void sortstr(string &str) {
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

long long sumstr(const string &s) {
    long long sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            sum += s[i] - '0';  
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string s1, s2;
        for (int i = 0; i < a.length(); i++) {
            if (isalpha(a[i])) {
                s1 += a[i];
            } else {
                s2 += a[i];
            }
        }
        sortstr(s1);
        cout << s1 << sumstr(s2) << endl;
    }
    return 0;
}
