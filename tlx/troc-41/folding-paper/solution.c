#include <stdio.h>

int main() {
    int l, w, a;
    scanf("%d %d %d", &l, &w, &a);
    int something = l * w;

    while (something >= a) {
        if (something == a) {
            puts("YA");
            return 0;
        }
        if (something % 2 != 0) {
            break;
        }
        something /= 2;
    }

    puts("TIDAK");

    return 0;
}
