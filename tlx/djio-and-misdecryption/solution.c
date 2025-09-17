// Code & Solution by Reydeuss @ Github
// Original Problem Title: Djio and Misdecryption
// Original Problem Link: https://tlx.toki.id/problems/bnpchs-2023-penyisihan/A

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    int i = 0;
    char c;
    bool safe = true;

    scanf("%d", &n); getchar();

    while (i++ < n) {
        c = getchar();
        if (c == '*') {
            safe = !safe;
            continue;
        }

        if (safe) {
            putchar(c);
        }
    }
    putchar('\n');

    return 0;
}
