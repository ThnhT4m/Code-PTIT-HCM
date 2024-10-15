#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct dn {
    string id;
    string name;
    int value;
};


bool cmp(const dn &a, const dn &b) {
    if(a.value==b.value) return a.id<b.id;
	return a.value>b.value;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    vector<dn> a(n);

 
    for (int i = 0; i < n; i++) {
        getline(cin, a[i].id);
        getline(cin, a[i].name);
        cin >> a[i].value;
        cin.ignore(); 
    }

    sort(a.begin(), a.end(), cmp);


    for (int i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].value << endl;
    }

    return 0;
}
