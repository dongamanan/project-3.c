#include<stdio.h>
int main()
{
	int sum=0,count,num;
	
	printf("enter any naumber:");
	scanf("%d",&num);
	
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("%d",count);
}