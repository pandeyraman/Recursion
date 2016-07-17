/* 
*  Find the factorial of any given number using recursion.
* Author : Raman Pandey
* Date : 07/12/2016
* Ref : Data Structure using c and c++, chapter 3 , page 127
*/
#include<stdio.h>
#include<conio.h>

int fact(int);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d! = %d",num,fact(num));
    getch();
    
}                                        /* end of main function */ 

int fact(int n)
{
    return (n==0 ? 1:n*fact(n-1));
}                                       /* end of fact function */
