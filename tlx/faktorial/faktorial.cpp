/**
 * Submission & solution by Reydeus
 * Title: OSN Informatika 2006 A - Faktorial
 * Original Problem: https://tlx.toki.id/problems/osn-2006/A
 * Submission: https://tlx.toki.id/problems/osn-2006/A/submissions/4325705
 */

#include <bits/stdc++.h>

int main() {
    int n;
    int count = 0;

    std::cin >> n;

    while (n >= 5) {
        n /= 5;
        count += n;
    }

    std::cout << count;

    return 0;
}
