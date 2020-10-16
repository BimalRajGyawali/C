#include<stdio.h>
void main()
{
	int a[100],i,n,num,flag=0;
	printf("Enter how many elements");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("The elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
	printf("Enter the element you want to search");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{flag=1;
		break;
		
		}
	}
	if(flag==1)
	{
		printf("yeahhhh number is found");
		
	}
	else
	{
		printf("Oh no! number is not found");
	}
	getchar();
}
