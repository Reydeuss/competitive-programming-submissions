/**
 * Submission & solution by Reydeus
 * Title: TROC #18 - A. Angka Tahun Baru
 * Original Problem: https://tlx.toki.id/problems/troc-18/A
 * Submission: https://tlx.toki.id/problems/troc-18/A/submissions/4325549
 */

#include <iostream>
#include <bits/stdc++.h>

bool is_prime(int n)
{
    // Check if n is 2 or 3
    if (n == 2 || n == 3) return true;

    // Check if n is lower than 2 or even
    if (n < 2 || n % 2 == 0) return false;

    for (int i = 5; (i*i) <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n;
    std::ios::sync_with_stdio(false);

    std::cin >> n;

    if (is_prime(n) && n < 7)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
