//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n, i, j;
    printf("Enter the value of n\n");
  	scanf("%d", &n);

  	//Write your code here
  	for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("* ");
      }
      printf("\n");
    }

  	return 0;
}
