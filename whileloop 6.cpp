// wap to print sum of odd number 1 to n
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n values");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			sum=sum+i;
			printf("%d\n",i);
		}
		i++;
	}
	printf("\n%d",sum);
}
