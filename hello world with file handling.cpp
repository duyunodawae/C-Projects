#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream writeFile("hello.txt");
    writeFile << "Hello World!";
    writeFile.close();

    ifstream readFile("hello.txt");
    string line;
    getline(readFile, line);
    cout << line;
    readFile.close();

    return 0;
}
