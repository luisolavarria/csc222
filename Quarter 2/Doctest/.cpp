#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Too few arguments: enter 1B or 4B for 2nd argument." << endl;
        return 1;
    }
    if (strcmp(argv[1], "1B") && strcmp(argv[1], "4B")) {
        cerr << "Second argument must be either 1B or 4B,";
        cerr << " not " << argv[1] << '.' << endl;
        return 2;
    }
        char filename[16];
    strcpy(filename, "classlist");
    strcat(filename, argv[1]);
    strcat(filename, ".dat");
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Error openning file " <<  filename << endl;
        return 3;
    }
    return 0;
}