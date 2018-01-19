#include<stdio.h>
int main()
{
	int num,count=0,digit;
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		count++;
		num/=10;
	}
	printf("%d",count);
return 0;	
}
