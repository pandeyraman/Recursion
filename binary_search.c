/* 
* C program to implement binary search.
* Author : Raman Pandey
* Date : 07/12/2016
* Ref : Data Structure using c and c++, chapter 3 , page 133
*/
#include <stdio.h> 
#include <conio.h> 

#define MAXSIZE 5
#define MAXSIZE 5

int binsrch(int , int);
int a[MAXSIZE];
int x;

int main () 
{
	int num,i,j,temp;
	
	printf ("Enter the number of elements \n");
	scanf ("%d", &num);
	
	for (i = 0; i < num; i++)
     {
		printf ("Enter the  element[%d]\n",i);
		scanf ("%d", &a[i]);
	 }
	for(i=0;i<5;i++)//for sorting
    {
		for(j=0;j<5;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf ("Enter the search element \n");
	scanf ("%d", &x);
	
	if (binsrch(0, num - 1) == -1)
    printf ("Element not found \n");
    else 
	printf ("Element found in position %d", binsrch (0, num - 1));		
	getch();
}
            /*end of main function*/
            
int binsrch (int low, int high) 
{
	int mid;
	
	if (low > high) {
		return (-1);
	} else {
		mid = ((low + high) / 2);
		return (x == a[mid] ? mid : x < a[mid] ? binsrch(low, mid-1) : binsrch(mid+1, high));
	}
}
  /*end of binsrch function*/

