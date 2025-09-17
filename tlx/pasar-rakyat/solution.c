// Original Problem Title: Pasar Rakyat (OSN Informatika 2010 no. 2E)
// Original Problem Link: https://tlx.toki.id/problems/osn-2010/2E/
// Code & Solution by: reydeuss@github

#include <stdio.h>

int gcd(int a, int b) {
    while (a % b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b;
}

int lcm(int x, int y) {
    return (x * y) / gcd(x, y);
}

int main() {
    int n, x, y;
    scanf("%d", &n);
    scanf("%d", &x);

    for (int i = 1; i < n; i++) {
        scanf("%d", &y);
        x = lcm(x, y);
    }

    printf("%d", x);
    return 0;
}
