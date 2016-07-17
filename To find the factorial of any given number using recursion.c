/* Program: To find the factorial of any given number using recursion
Author : Raju Shrestha [522]
Date: 17th july 2016
Ref    : Data structures using C and C++, Chap 3, Page 127
*/

#include<stdio.h>
#include<conio.h>

int fact (int n);

main() {
	int n;
	
	printf ("Enter a number \n");
	scanf ("%d", &n);
	
	printf ("Factorial = %d", fact(n));
	
	getch();
}

int fact(int n) {
	return (n == 0 ? 1 : n * fact(n-1));
}
