// Original Problem Title: Pecahan Uang (OSN 2010 2B)
// Original Problem Link: https://tlx.toki.id/problems/osn-2010/2B
// Code & Solution by: reydeuss@github

#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    int lembaran;

    if ((lembaran = k / 1000)) { printf("1000 %d\n", lembaran); k %= 1000; }
    if ((lembaran = k / 500))  { printf("500 %d\n", lembaran); k %= 500; }
    if ((lembaran = k / 200))  { printf("200 %d\n", lembaran); k %= 200; }
    if ((lembaran = k / 100))  { printf("100 %d\n", lembaran); k %= 100; }
    if ((lembaran = k / 50))   { printf("50 %d\n", lembaran); k %= 50; }
    if ((lembaran = k / 20))   { printf("20 %d\n", lembaran); k %= 20; }
    if ((lembaran = k / 10))   { printf("10 %d\n", lembaran); k %= 10; }
    if ((lembaran = k / 5))    { printf("5 %d\n", lembaran); k %= 5; }
    if ((lembaran = k / 2))    { printf("2 %d\n", lembaran); k %= 2; }
    if ((lembaran = k / 1))    { printf("1 %d\n", lembaran); k %= 1; }

    return 0;
}
