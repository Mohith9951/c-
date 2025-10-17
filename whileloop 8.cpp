// wap to print sum of n to 1
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value ");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		sum=sum+i;
		i--;
	}
	printf("%d",sum);
}
