//question-4
#include<stdio.h>
void main()
{
	int a[6];
	int *p,i;
	p=&a;
	
	for(i=0;i<=5;i++)
	{
		printf("enter elements");
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<=5;i++)
	{
		printf("%d\n",(*(p+i))*(*(p+i))*(*(p+i)),(p+i));
	}
}