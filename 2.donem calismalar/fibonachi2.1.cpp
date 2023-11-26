#include<iostream>
int FibonacciBul(int n)
{
 if ( n == 0 )
 {
 	 return 0;
 }

 if ( n == 1 )
 {
 	return 1;
 }
  
 return FibonacciBul(n-1) + FibonacciBul(n-2);
}
main()
{
int n;
printf("Kacinci siradaki Fibonacci degeri gosterilsin: ");
scanf("%d",&n);
printf("Fibonacci degeri = %d",FibonacciBul(n));
}
