#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int minNum = min({A, B, C});
    int maxNum = max({A, B, C});

    cout << minNum << " " << maxNum << endl;

}

