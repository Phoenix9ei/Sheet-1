#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;


    bool correct = false;
    int actualResult = 0;

    if (S == '+') {
        actualResult = A + B;
        correct = (actualResult == C);
    } else if (S == '-') {
        actualResult = A - B;
        correct = (actualResult == C);
    } else if (S == '*') {
        actualResult = A * B;
        correct = (actualResult == C);
    }


    if (correct) {
        cout << "Yes" << endl;
    } else {
        cout << actualResult << endl;
    }

    return 0;
}
