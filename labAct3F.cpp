#include <iostream>
#include <string>
using namespace std;

int main () {

    //lab3a

    int num;

    for (num = 0; num <= 9; num = num + 1) {
        if (num <= 3)
            cout << num << " ";
        else if (num == 4)
            cout << "\n" << num << " ";
        else if (num == 6)
            cout << " " << num << endl;
        else if (num == 8)
            cout << " " << num << endl;
        else
            cout << num;
    }

    /*cout << "\n" << endl;
    //lab3b

    int n;
    int t;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (t = 1; t <= n; t = t + 1) {
        sum = sum + (t * t);

        cout << t << "^2";
        
        if (t < n)
            cout << " + ";
        else
            cout << " = " << sum;
        
    
    }*/

    cout << "\n" << endl;
    //lab3c

   string message;
    int spaceCount = 0;

    cout << "Enter a message : ";
    getline(cin, message);

    for (int i = 0; i < message.length(); i++) {
        if (message[i] == ' ')
            spaceCount = spaceCount + 1;
    }

    cout << "Number of spaces : " << spaceCount << endl;

    return 0;
}