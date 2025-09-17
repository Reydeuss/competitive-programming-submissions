// Original Problem Title: Fast Arithmetics (TROC 38)
// Original Problem Link: https://tlx.toki.id/problems/troc-38/A
// Code & Solution by: reydeuss@Github

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a);

    // Loop for 6 (n-1) times
    scanf("%d", &b);
    a += abs(b);
    scanf("%d", &b);
    a += abs(b);
    scanf("%d", &b);
    a += abs(b);
    scanf("%d", &b);
    a += abs(b);
    scanf("%d", &b);
    a += abs(b);
    scanf("%d", &b);
    a += abs(b);

    printf("%d", a);

    return 0;
}
