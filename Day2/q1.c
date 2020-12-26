#include <stdio.h>
int main()
{
   int array[100], position, c, n;

   printf("Enter no. of elements:\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter where to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Sorry! Now you can not delet any element.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Final Array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}