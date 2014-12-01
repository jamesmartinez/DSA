/* gcc -o logn logn.c -lm */

#include <math.h>
#include <stdio.h>

int main() {
  int n;
  for(n=1; n<=200; n+=10) {
    printf("%3d. %12.5f\n", n, log(n));
  }
  return 0;
}
