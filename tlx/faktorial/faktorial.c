// Code & Solution by: Reydeuss @ Github
// Problem Title: Faktorial
// Problem Description: Count the trailing zeros of the result of N!, where 1 <= N <= 10,000.
// Problem Link: https://tlx.toki.id/problems/osn-2006/A
// Solution Link: https://tlx.toki.id/problems/osn-2006/A/submissions/2795899

#include <stdio.h>

int main() {
    int n;
    int count = 0;

    scanf("%d", &n);

    while (n >= 5) {
        n /= 5;
        count += n;
    }

    printf("%d", count);

    return 0;
}
