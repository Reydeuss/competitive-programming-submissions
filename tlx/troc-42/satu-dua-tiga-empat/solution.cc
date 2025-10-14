// Submission & solution by Reydeus
// Problemset: TROC #42
// Title: Satu Dua Tiga Empat
// Original Problem: https://tlx.toki.id/problems/troc-42/A/
// Submission: https://tlx.toki.id/problems/troc-42/A/submissions/4483333

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int res;
    if (x == 1) res = 1;
    if (x == 2) res = 3;
    if (x == 3) res = 6;
    if (x == 4) res = 0;

    cout << res << endl;
    return 0;
}
