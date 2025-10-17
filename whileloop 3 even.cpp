#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n value:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
	    printf("\n%d",i);
		}
		i++;
	}
	return 0;
	
}
