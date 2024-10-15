#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

int cnt = 0;

struct sv {
    int stt=cnt;
    string ten;
    string lop;
    string ntns;
    float gpa;
};

void processntns(string &s1) {
    string str = s1;
    string s;
    s1 = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '/') {
            s += str[i];
        } else {
            if (stoi(s) < 10) {
                s1 += '0' + s + '/';
            } else {
                s1 += s + '/';
            }
            s = "";
        }
    }
    if (!s.empty()) {
        s1 += s;
    }
}

void xoakt(string &s) {
    int n = s.length();
    while (s[0] == ' ') {
        s.erase(0, 1);
    }
    while (s[s.length() - 1] == ' ') {
        s.erase(s.length() - 1, 1);
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i, 1);
            i--;
        }
    }
}

void processten(string &s) {
    string str = s;
    int n = str.length();
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }
    str[0] -= 'a' - 'A';
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            str[i + 1] -= 'a' - 'A';
        }
    }
    s = str;
}

bool compareGPA(const sv &a, const sv &b) {
    return a.gpa > b.gpa;  
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  

    vector<sv> students;
    
    while (t--) {
        cnt++;
        sv sinhvien;

        getline(cin, sinhvien.ten);
        cin >> sinhvien.lop;
        cin >> sinhvien.ntns;
        cin >> sinhvien.gpa;

       
        processntns(sinhvien.ntns);
        xoakt(sinhvien.ten);
        processten(sinhvien.ten);

        students.push_back(sinhvien);

        cin.ignore();  
    }

    sort(students.begin(), students.end(), compareGPA);

  
    for (int i = 0; i < students.size(); ++i) {
        cout << "B20DCCN" << (students[i].stt < 10 ? "00" : "0") << students[i].stt << " "
             << students[i].ten << " "
             << students[i].lop << " "
             << students[i].ntns << " "
             << fixed << setprecision(2) << students[i].gpa << endl;
    }

    return 0;
}
