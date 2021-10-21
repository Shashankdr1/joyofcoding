#include<stdio.h>
#include<stdlib.h>
int uniqueele(int a[],int n)
{
	int count=1;
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i]==a[j] && i!=j)
			break;
		if(j==n)
			printf("\nunique elements in  a array is [%d]: %d \n",count,a[i]);
			++count;
	return -1;
}
int main()
{
	int n,i;
	printf("\nenter no of elements :");
	scanf("%d",&n);
	int a[n];
	printf("\nenter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	uniqueele(a,n);
	return 0;
}


