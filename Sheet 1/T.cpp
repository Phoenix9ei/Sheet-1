#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int min_val = min(A, min(B, C));
    int max_val = max(A, max(B, C));
    int mid_val = A + B + C - min_val - max_val;

    cout << min_val << endl;
    cout << mid_val << endl;
    cout << max_val << endl;

    cout << endl;


    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
