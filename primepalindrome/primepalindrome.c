#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int is_palindrome(int i)
{
   int a = i/100;
   int b = (i-a*100)/10;
   int c = (i-a*100-b*10);
   return (a == c);
}

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
   for(int i = 999; i > 0; i--){
      if(is_palindrome(i) && is_prime(i)){
	 printf("%d\n",i);
	 break;
      }
   }
}
