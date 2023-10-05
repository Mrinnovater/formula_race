/*  There is a formula 1  race is going on between different countries like  
Argentina,Australia,Austria,Behrain,Belgium,Brazil,Canada,China  at  AUSTRALIA .
Record the distance covered by specific country racer for every 2 laps or every 2 seconds 
 upto  30 laps or 30 seconds by the End of the Race .
  And Write a C program to print who is the maximum distance covered for every 2laps or 2 seconds .
 And finally print who is winner (who covered the maximum distance after 30 laps or 30seconds).*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,j,m,n,d[20][20],s[20][20],name[n][20],tot_dist=0,*x;
	printf("------------WELCOME TO THE FORMULA 1 RACE-----------");
	printf("\nenter number of timelines or number of laps you want:");
	scanf("%d",&m);
	printf("\nenter number of countries participating in Formula 1 race:");
	scanf("%d",&n);
	ptr=(int *)calloc(m,n*sizeof(int));
	x=ptr;
	for(j=0;j<m;j++)
	{
		printf("\nEnter name of country %d:",j+1);
	    scanf("%s",name[j]);
	for(i=0;i<n;i++)
	{
		printf("\nenter %s racer distance at timeline %d:",name[j],i+1);
    	scanf("%d",ptr);
    	tot_dist+=*ptr;
	    s[j][i]=tot_dist;
	}
	tot_dist=0;
    }
    
    int a=0,t=2,k;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(tot_dist<s[j][i])                        // p1  1  5  2             1 6 8
	        tot_dist=s[j][i];                          //  p2  3  1  1             3 4 5
    		if(tot_dist==s[j][i])                      //  p3  2  3  4             2 5 9
    		k=j;
		}
	printf("-------------------------------");	
	printf("\nLEADER BOARD POSITIONS OF RACERS for %d sec or %d laps :------",t,t);
	printf("\n%s racer is at top position\n",name[k]);
	t+=2;
	tot_dist=0;
	}
	printf("\n---------------------");
	printf("\n winner at last is %s racer ",name[k]);
}
