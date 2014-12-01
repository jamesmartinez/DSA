#include <stdio.h>
int binary_search(int num, int size, int *list)
{
   int start = 0;
   int end = size;
   int middle;
   while (  start <= end )
   { 
       middle = ( start + end ) / 2;
       if ( list[middle] < num )
       {
           start = middle + 1;
           continue;
       }
       if ( list[middle] > num )
       {
           end = middle - 1;
           continue;
       }
       
       return middle;
   }
    
   return 0;
}

int main(void)
{
   int i[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30}; 
   printf("%d\n",i[binary_search(7,30,i)]);
}
