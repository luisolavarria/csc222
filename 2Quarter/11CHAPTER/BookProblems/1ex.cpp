#include <iostream>
using namespace std;
int main {
struct Time {
    int hour, minute;
    double second;
};

void print_time(const Time& time)
{
    cout << time.hour << ":" << time.minute  << ":" << time.second << endl;
}

Time current_time = {9, 14, 30.0};
print_time(current_time);
return 0;
}