#include <iostream>
using namespace std;

int main() {
    int i;
    float height[10], sum = 0, average;

    for (i = 0; i < 10; i++) {
        cout << "Enter height of student " << i + 1 << ": ";
        cin >> height[i];
        sum = sum + height[i];
    }

    average = sum / 10;
    cout << "Average height: " << average << endl;

    cout << "Students taller than average:\n";
    for (i = 0; i < 10; i++) {
        if (height[i] > average)
            cout << height[i] << endl;
    }
    return 0;
}