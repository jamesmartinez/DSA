#include <stdio.h>
int naive_search(int num, int size, int *list)
{
     int i; 
     for(i = 0; i < size ; i++)
     {
         if (list[i] == num )
         {
             return i;
         }
     } 
   return 0;
}

int main(void)
{
   int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
   printf("%d\n",i[naive_search(7,10,i)]);
}
