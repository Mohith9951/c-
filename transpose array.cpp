#include<stdio.h>
int main()
{
	int a[3][3],trans[3][3],i,j;
	printf("\nEnter elements into matrix A:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Index is [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("\n Transpose matrix is:");
	for(i=0;i<3;i++)
	{
		printf("\n ");
		for(j=0;j<3;j++)
		{
			printf("\t%d",trans[i][j]);
		}
	}
	return 0;
}
