#include<stdio.h>
void main()
{
  int n,original,reminder,reverse=0;
  printf("enter the number:");
  scanf("%d",&n);
  original=n;
  while(n!=0)
  {
    reminder=n%10;
    reverse=reverse*10+reminder;
    n=n/10;
  }
  if(original==reverse)
  {
    printf("\n%dis a polindrome",original);
  }
  else
  {
    printf("\n %dis not apolindrome",original);
  }

}
   
