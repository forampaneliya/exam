//question6
#include<stdio.h>
int main()
{
      FILE *file = fopen("data.txt","w");
	  if(file==NULL)
	  {
	  	printf("error\n");
	  	return 1;
	  }
	  
	  int i;
	  for(i=0;i<3;i++)
	  {
	  	char name[50],role[50];
	  	printf("enter name of employee %d:",i+1);
	  	scanf("%s",name);
	  	
	  	printf("enter role of employee %d:",i+1);
	  	scanf("%s",role);
	  	
	  	getchar();
	  	fprintf(file, "%s,%s\n",name,role);
	  	
	  }	
	  fclose(file);
	  return 0;
}