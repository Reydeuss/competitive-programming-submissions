/**
 * Submission & solution by Reydeus
 * Title: BNPCHS 2023 - Penyisihan A (Djio dan Misdeskripsi)
 * Original Problem: https://tlx.toki.id/problems/bnpchs-2023-penyisihan/A
 * Submission: https://tlx.toki.id/problems/bnpchs-2023-penyisihan/A/submissions/4325647
 */

#include <bits/stdc++.h>

int main() {
    int n;
    char c;
    bool safe = true;

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::cin >> c;

        if (c == '*') {
            safe = !safe;
            continue;
        }

        if (safe) {
            std::cout << c;
        }
    }

    return 0;
}
