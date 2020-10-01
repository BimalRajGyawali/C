#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,num,flag=0;
	printf("enter how many elements");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("the elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
	printf("enter the element you want to search");
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
		printf("The number is find at index: %d", i);
		
	}
	else
	{
		printf("your number is not found");
	}
	getch();
}
