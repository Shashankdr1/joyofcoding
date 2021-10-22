#include<stdio.h>
int main()
{
	int a[40];	
	int sum,n,i,j;
	printf("\nenter the no of integer:");
	scanf("%d",&n);
	printf("\nenter the sum:");
	scanf("%d",&sum);
	printf("enter the values:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((a[i]+a[j])==sum)
				printf("the indices are found at %d and %d",i,j);
			printf("no indices found");
return 0;
}
	
