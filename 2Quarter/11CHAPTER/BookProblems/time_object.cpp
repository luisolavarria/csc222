#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

void print_time(const Time& time)
{
    cout << time.hour << ":" << time.minute  << ":" << time.second << endl;
}
void increment(Time& time, double secs)
{
    time.second += secs;

    while (time.second >= 60.0) {
        time.second -= 60.0;
        time.minute += 1;
    }
    while (time.minute >= 60) {
        time.minute -= 60;
        time.hour += 1;
    }
}
int main() {


Time current_time = {9, 14, 30.0};
print_time(current_time);

}
