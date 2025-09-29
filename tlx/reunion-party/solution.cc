// Submission & solution by Reydeus
// Problemset: https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-qual
// Title: Reunion Party
// Original Problem: https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-qual/D
// Submission: https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-qual/D/submissions/4394175

#include <bits/stdc++.h>

using namespace std;

int f(int t) {
  return (sqrt(1 + 8*t) - 1) / 2;
}

int main() {
  int n;
  cin >> n;

  while (n--) {
    int h;
    cin >> h;
    cout << f(h) + 1 << endl;
  }

  return 0;
}
