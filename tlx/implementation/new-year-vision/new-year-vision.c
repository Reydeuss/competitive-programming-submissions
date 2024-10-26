// Solution & Code by Reydeuss @ Github
// Problem Title: New Year Vision @ TLX
// Original Problem: https://tlx.toki.id/problems/troc-10/A/
// Solution Link: https://tlx.toki.id/problems/troc-10/A/submissions/2804070

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_LENGTH 100

int main() {
    char S[MAX_STR_LENGTH + 1];
    scanf("%[^\n]", S);
    getchar();

    for (int i = 0; i < strlen(S); i++) {
        char c = getchar();
        if (tolower(c) != tolower(S[i])) {
            puts("x_x");
            return 0;
        } 
    }

    puts("20/20");

    return 0;
}
