#include<stdio.h>
int main()
{
	int a[50],c[50];
	int i,j,pos;
	
	printf("enter the no on ballons");
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(a[i]==a[j])
			{
				pos=j;
			}
		}
		c[pos]=-1;
	}
	printf("new contents are:");
	for(i=0;i<9;i++)
	{
		if(c[i]!= -1){

			printf("%d",c[i]);
		}
	}
return 0;
}
			
		
	
