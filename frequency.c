#include<stdio.h>

int main()
{
	int i,n;
	int a[100];
	int count[9];
	int sum = 0;
	int ch;
		
	printf("Enter the size of array: ");
	scanf("%d",&n);


	printf("Enter the elements of the array: ");
	
	for(i = 0;i < n ; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i = 0;i < 9 ; i++)
	{
		count[i] = 0;
	}

	for(i = 0; i < n ; i++)
	{
		
		ch=a[i];
		count[ch]++;
	}


	for(i =0; i<n;i++)
	{	
			if(count[i]!=0)
				printf("the no. of %d is %d\n",a[i],count[i]);
	}

	return 0;

}
