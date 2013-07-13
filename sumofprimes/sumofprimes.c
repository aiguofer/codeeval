#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int is_prime(int i)
{
   for(int j=2; j<=(int) sqrt((double) i); j++){
      if(i%j == 0)
	 return 0;
   }
   return 1;
}

int main()
{
   int sum = 2, count = 2, i=3;
   while(count<=1000){
      if(is_prime(i)){
	 sum += i;
	 count++;
      }
      i++;
   }
   printf("%d\n",sum);
}
