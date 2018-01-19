#include <stdio.h>
int main(void) 
{
	int n,i,start,end;
	scanf("%d",&start);
	scanf("%d",&end);
	scanf("%d",&n);
	for(i=start;i<=end;i++)
	{
		if(i==n)
		printf("Yes");
	}
	return 0;
}
