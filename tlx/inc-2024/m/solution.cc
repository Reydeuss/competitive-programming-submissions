// Submission & solution by Reydeus
// Problemset: INC 2024
// Title: ICPC Provincial
// Original Problem: https://tlx.toki.id/problems/inc-2024/M
// Submission: https://tlx.toki.id/problems/inc-2024/M/submissions/4525450

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> students(3 * n);
  for (auto& s : students) {
    cin >> s;
  }

  sort(begin(students), end(students));
  cout << students[n] << '\n';

  return 0;
}
