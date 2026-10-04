#include <iostream>
using namespace std;

int main ()  {

    //1.A
    char letter;

    for (letter = 'A'; letter <= 'Z'; letter = letter + 1)
        cout << letter;

cout << "\n\n";

    //1.B
    char first = 'A', second = 'Z';
    int count;

    for (count = 0; count < 26; count = count + 1) {
        if (count % 2 == 0) {
            cout << second;
            second = second - 1;
        } else {
            cout << first;
            first = first + 1;
        }
    }

cout << "\n\n";

    //1.C
    int number1, number2;

    for (number1 = 10, number2 = 1; number2 >= 6; number1 = number1 - 1, number2 = number2 + 1) {
        cout << number1 << number2;
    }

cout << "\n\n";

    //2.
    int a, b, i;

    cout << "Enter Start Number: ";
    cin  >> a;
    cout << "Enter End Number: ";
    cin >> b;

    cout << "EVEN\tODD" << endl;
    cout << "===========" << endl;

    for (i = a; i <= b; i = i + 1) {
        if (i % 2 == 0) {
            cout << i << "\t";
        } else {
            if (i == a) {
                cout << "\t" << i << endl;
            } else {
                cout << i << endl;
            }
        }
    }
    return 0;
}