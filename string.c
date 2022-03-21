#include <stdio.h>
#include<string.h>

void main()
{
  int i,j,n,count=0;
  char str1[100],str2[100];
  scanf("%s",str1);
  strcpy(str2,str1);
  for(i=0;i<strlen(str1);i++)
  {
    if(str1[i] == str2[strlen(str1)-1-i])
    {
      count++;
    }
  }
  if(count==strlen(str1))
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
}