// wap to print sum of even numbers 1 to n
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n value");
	scanf("%d",&n);
	i=1;
	do
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	while (i<=n);
}
