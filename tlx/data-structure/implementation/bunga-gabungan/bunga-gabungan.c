/**
 * Solution by Reydeus
 * Title: Bunga Gabungan
 * Level: 300
 * Original Problem: https://tlx.toki.id/problems/troc-19/A
 * Submission: https://tlx.toki.id/submissions/2403553
 */

#include <stdio.h>

int main()
{
  int p, q;
  scanf("%i %i", &p, &q);
  int sum = p*p + q*q + 1;

  if (sum % 4 == 0)
  {
    printf("%i", sum / 4);
    return 0;
  }
  else
  {
    printf("-1");
    return 0;
  }
}