#include<stdio.h> 
#include<math.h>
int main ()
{
  int count=0,num,i;
  scanf("%d",&num);
  for(i=0;i<num;i++)
  if(pow(2,i)==num)
  count++;
  if(count>0)
  printf("yes");
  else
  printf("no");
   return 0;
}


