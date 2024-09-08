/**
 * Submission & solution by Reydeus
 * Title: A. Angka Tahun Baru
 * Original Problem: https://tlx.toki.id/problems/troc-18/A
 * Submission: https://tlx.toki.id/problems/troc-18/A/submissions/2413890
 */

#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n)
{
  if (n <= 1) {
    return false;
  }
  
  if (n <= 3) {
    return true;
  }

  for (int i = 2; i <= n/2; ++i ) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main()
{
  int n;
  scanf("%i", &n);

  if (isPrime(n) && n < 7)
  {
    printf("YES");
    return 0;
  }

  printf("NO");
  return 0;
}
