// Submission & solution by Reydeus
// Problemset: IDEAFUSE 2014 - ICPC Sumatra Provincial Qualification Round
// Title: A Counting
// Original Problem: https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-qual/A
// Submission: https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-qual/A/submissions/4393377

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    unsigned x, y;
    cin >> x >> y;

    cout << "Case #" << i << ": ";
    bool found = false;
    while (x <= y) {
      if (x == y) {
        cout << x << endl;
        found = true;
        break;
      }
      x += 7;
      y -= 5;
    }

    if (!found) {
      cout << "impossible" << endl;
    }
  }

  return 0;
}
