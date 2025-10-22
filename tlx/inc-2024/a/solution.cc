// Submission & solution by Reydeus
// Problemset: INC 2024
// Title: Problem C
// Original Problem: https://tlx.toki.id/problems/inc-2024/A
// Submission: https://tlx.toki.id/problems/inc-2024/A/submissions/4522449

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int n = 0; n < N; n++) {
    cin >> ws;
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size(); i++) {
      if (s[i] == 'c') {
        char next = s[i+1];

        // end of word case
        if (i == s.size() - 1) {
          s.replace(i, 1, "k");
        } else if (next == 'e' || next == 'i' || next == 'y') {
          s.replace(i, 1, "s");
        } else if (next == 'h') {
          s.replace(i, 2, "c");
        } else {
          s.replace(i, 1, "k");
        }
      }
    }
    cout << s << '\n';
  }

  return 0;
}
