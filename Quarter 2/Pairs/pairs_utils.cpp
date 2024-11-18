#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<string> make_list(stringstream& ss, char listnum) {
    vector<string> students;
    string student;
    if (listnum == 1) {
        while ((ss >> student) && (student != "==="))
            students.push_back(student);
    } else if (listnum == 2) {
        while ((ss >> student) && (student != "==="));
        while (ss >> student) students.push_back(student);
    }
    return students;
}

vector<string> make_pairs(vector<string> students) {
    vector<string> pairs;
    return pairs;
}