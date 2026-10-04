#include <iostream>
using namespace std;

int main() {
    int number, original, digit, temp, sum = 0;

    cout << "Enter an integer: ";
    cin >> number;

    original = number;

    for (number % 10; number > 0; number /= 10) {
        sum += number ;
    }

    int place = 1;
    for (temp = original; temp >= 10; temp /= 10) {
        place *= 10;
    }

    cout << "The individual digits are: ";
    for ( ; place > 0; place /= 10) {
        cout << (original / place) % 10 << "  ";
    }
    cout << endl;

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}