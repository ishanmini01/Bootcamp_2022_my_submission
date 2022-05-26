#include <stdio.h>
 
int main()
{
  int i, Number; 
   
  printf("Enter number: ");
  scanf("%d", &Number);
 
  printf("\nFactors :");
  for (i = 1; i <= Number; i++)
   {
     if(Number%i == 0)
        {
		 printf(" %d  ", i);
		}
   }
 printf("\n");	
  return 0;
}
