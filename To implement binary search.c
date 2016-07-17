/*To implement binary search.
Author : Raju Shrestha [522]
Date   : 17 th july 2016
Ref   : Data structures using C and C++, Chap 3, Page 133
*/
#include <stdio.h> 
#include <conio.h> 

#define MAXSIZE 5

int binsrch(int , int);
void sortArray(int []);

int a[MAXSIZE];
int x, n;

main () {
	
	int i;
	
	printf ("Enter the number of elements \n");
	scanf ("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf ("Enter the element \n");
		scanf ("%d", &a[i]);
	}
	
	sortArray(a);
	
	printf ("Enter the search element \n");
	scanf ("%d", &x);
	
	if (binsrch(0, n - 1) == -1) {
		printf ("Element could not be found \n");
	} else {
		printf ("Element found in position %d", binsrch (0, n - 1));		
	}
	
	getch();
}

void sortArray(int a[]) {
	int i, j, temp;
	
	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
		}
	}
}
	
int binsrch (int low, int high) {
	int mid;
	
	if (low > high) {
		return (-1);
	} else {
		mid = ((low + high) / 2);
		return (x == a[mid] ? mid : x < a[mid] ? binsrch(low, mid-1) : binsrch(mid+1, high));
	}
}
