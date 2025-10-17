//wap to print sum of 1 to n
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\t%d",sum);
	return 0;
}
