#include <stdio.h>
int strlen2(char *s)
{
   int i = 0;
   int c = 0;
   for ( i = 0; s[i] != '\0'; i++ ) {
       ++c;
   }
   return c;
}

int main(void)
{
  char x[10] = "abcdefgh";
  printf("%d\n", strlen2(x));
  return 0;
}
