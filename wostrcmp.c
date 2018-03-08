#include<stdio.h> 
#include<string.h>
int main ()
{
  char a[50],b[50];
  int i,count=0,la,lb;
  scanf("%s%s",a,b);
  la=strlen(a);
  lb=strlen(b);
  for(i=0;a[i]!='\0' && b[i]!='\0';i++)
    if(a[i]==b[i])
     count++;
      if((count==la) && (count==lb))
      printf("Equal");
    else if(a[0]>b[0] && a[0]!=b[0]) 
          printf("%s",a);
          else
          printf("%s",b);
             return 0;
}

