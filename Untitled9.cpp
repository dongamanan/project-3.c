#include<stdio.h>
int main()
{
	int num,first,last,sum;
	
	printf("enter pless any number:");
	scanf("%d",&num);
	
	last = num % 10;
	

	
	for(first = num; first >= 10; first /= 10);
	sum=first+last;
	
	printf("first digit and last digit for sum:%d",sum);
}