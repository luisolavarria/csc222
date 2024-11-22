
1.- What happens if you send it an int instead of a char?

void print_twice(char x) {
    cout << x << x << endl;}
    int main() {
        char Integer = '2' ;
        print_twice(Integer);

    return 0;
}

When we send an integer "2" to this program gives us an output of "22" as long as is a one digit integer.

2.- What about a double? 

void print_twice(double x) {
    cout << x << x << endl;}
    int main() {
        double Float = 2.2 ;
        print_twice(Float);

    return 0;
}


When we send a double to the program it generates 2 warnings for implicit conversion from 'int' to 'char'. So the correct way to write it would be:
void print_twice(double x) {
    cout << x << x << endl;}
    int main() {
        double Float = 2.2 ;
        print_twice(Float);

    return 0;
}

And the Output would be "2.22.2".

3.- Try sending a string, like, "tryme"


using namespace std;
void print_twice(string x) {
    cout << x << x << endl;}
    int main() {
        char Phrase = 'tryme' ;
        print_twice(Phrase);

    return 0;
    }

When we plug in "tryme" as the argument, the program would generate an Error.
So the correct way to do this would be:

void print_twice(string x) {
    cout << x << x << endl;}
    int main() {
        string Phrase = "tryme" ;
        print_twice(Phrase);

    return 0;
}