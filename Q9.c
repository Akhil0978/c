#include<stdio.h>
int main()
{
  int i,j;
  printf("Enter a no.");
  scanf("%d",&i);
  for(j=1;j<=i;j++)
  {
    printf("%d\n",j*j*j);
  }
  return 0;
}
