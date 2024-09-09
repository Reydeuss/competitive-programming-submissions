/**
 * Solution by Reydeus
 * Title: Bunga Gabungan
 * Level: 300
 * Original Problem: https://tlx.toki.id/problems/troc-19/A
 * Submission: https://tlx.toki.id/problems/troc-19/A/submissions/2419846
 */

#include <iostream>

int main ()
{
  int p, q;
  std::cin >> p, q;

  int sum = p*p + q*q + 1;

  if (sum % 4 == 0)
  {
    std::cout << sum / 4 << std::endl;
    return 0;
  }
  else {
    std::cout << "-1" << std::endl;
    return 0;
  }
}
