#include <iostream>
using namespace std;

int main() {

    int n, ctr;
    float score[5], maxScore, minScore;

    cout << "How many scores? : ";
    cin >> n;

    for (ctr = 0; ctr < n; ctr++) {
        cout << "Enter score " << ctr + 1 << ": ";
        cin >> score[ctr];
    }

    maxScore = score[0];
    minScore = score[0];

    for (ctr = 1; ctr < n; ctr++) {
        if (score[ctr] > maxScore)
            maxScore = score[ctr];
        if (score[ctr] < minScore)
            minScore = score[ctr];
    }

    cout << "Maximum score: " << maxScore << endl;
    cout << "Minimum score: " << minScore << endl;
    return 0;
}