#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();  

    while (T--) {
        string S;
        getline(cin, S);

        long long sum = 0;
        long long current_number = 0;
        bool in_number = false;

        for (char c : S) {
            if (isdigit(c)) {
                current_number = current_number * 10 + (c - '0');
                in_number = true;
            } else {
                if (in_number) {
                    sum += current_number;
                    current_number = 0;
                    in_number = false;
                }
            }
        }

      
        if (in_number) {
            sum += current_number;
        }

        cout << sum << endl;
    }

    return 0;
}
