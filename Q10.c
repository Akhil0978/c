#include<stdio.h>
int main()
{
  int i,j;
  printf("Enter a no.");
  scanf("%d",&i);
  for (j=1;j<=101;j++)
  {
    printf("%d\n",j*i);
  }
  return 0;
}
