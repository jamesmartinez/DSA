#include <stdio.h>
int binary_search(int num, int size, int *list)
{
   int start = 0;
   int end = size;
   int middle;
   int found = 0;
   while (  start <= end )
   { 
       if ( list[start] == num )
       {
          return start;
       }

       if ( list[end] == num )
       { 
           return end;
       }

       middle = ( start + end ) / 2;

       if ( list[middle] == num )
       { 
           return middle;
       }
       
       if ( list[middle] < num )
       {
           end = middle  + 1;
       }
       else
       {
           start = middle - 1;
       }
   }
    
   return 0;
}

int main(void)
{
   int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
   printf("%d\n",i[binary_search(7,10,i)]);
}
