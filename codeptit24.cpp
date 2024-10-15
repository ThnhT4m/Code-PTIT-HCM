#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  
    ifstream infile("PTIT.in");
    ofstream outfile("PTIT.out");

    string line;

    while (getline(infile, line)) {
        outfile << line << endl;
    }

 
    infile.close();
    outfile.close();

    return 0;
}
