#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double N;
    cin >> N;

    double intPart, fracPart;
    fracPart = modf(N, &intPart);

    if (fracPart == 0) {
        cout << "int " << int(intPart) << endl;
    } else {
        cout << "float " << int(intPart) << " " << fracPart << endl;
    }

    return 0;
}
