#include <stdio.h>

int main()
{
	int a[10],i,j,temp;
	printf("请输入十个数");
	for(i=0;i<10;i++)
	{
	 	scanf("%d",&a[i]); 
	}
	
	for(i=0;i<9;i++)
	{
		for(j=9;j>i;j--)
		{
			if(a[9-j]>a[8-j])
			{
				temp=a[9-j];
				a[9-j]=a[8-j];
				a[8-j]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
	 	printf("%d ",a[i]);
	}
}

