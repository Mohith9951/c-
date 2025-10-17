// wap to print odd numbers 1 to n
#include<stdio.h>
int main()
{
	int i,n;
	printf(" enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	 } 
}
