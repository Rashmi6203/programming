#include<stdio.h>
int main ()
{
	char g;
	int yos,qual,salary=0;
	
	printf("enter gender,years of service , qualifcation (0=G,1=PG):");
	scanf("%c%d%d",&g,&yos,&qual);
	
	if (g=='m'&&yos>=10&&qual==1)
	    salary=15000;
	else if(g=='m'&&yos>=10&&qual==0)
	    salary=10000;
    else if(g=='m'&&yos<10&&qual==1)
	    salary=10000;
	else if(g=='m'&&yos<10&&qual==0)
	    salary=7000;
	else if (g=='f'&&yos>=10&&qual==1)
	    salary=12000;
	else if (g=='f'&&yos>=10&&qual==0)
	    salary=9000;
	else if (g=='f'&&yos<10&&qual==1)
		salary=10000;
	else if(g=='f'&&yos<10&&qual==0)
	    salary=6000;
	printf("\nsalary of employee=%d",salary);
	return 0;
}
	
