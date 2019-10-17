#include<stdio.h>

int main()
{
int max[10][10],avail[10],allo[10][10],need[10][10],work[10],ans[10],flag;
int n,m,i,j,c=0,k,l,pp;
int fini[10];


printf("ENTER THE NO:OF PROCESSES: ");
scanf("%d",&n);
printf("\nENTER THE NO:OF RESOURCES:");
scanf("%d",&m);
printf("ENTER THE MAX MATRIX\n");
for(i=0;i<n;i++)
{
printf("enter the next row");
	for(j=0;j<m;j++)
	{
		scanf("%d",&max[i][j]);
		
	}
printf("\n");
}
printf("ENTER THE ALLOCATION MATRIX\n");
for(i=0;i<n;i++)
{
printf("enter the next row");	
	for(j=0;j<m;j++)
	{
		scanf("%d",&allo[i][j]);
		printf("\n");
	}

}
printf("ENTER THE AVAILABLE MATRIX\n");
for(i=0;i<m;i++)
{
	scanf("%d",&avail[i]);
	work[i]=avail[i];
	
}
for(i=0;i<n;i++)
{
fini[i]=0;
}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
	
	need[i][j]=max[i][j]-allo[i][j];
	}
}
printf("\n NEED MATRIX\n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
	printf("%d\t",need[i][j]);
	}
printf("\n");
}
while(c<=m)
{
for(i=0;i<n;i++)
{
flag=0;
	for(j=0;j<m;j++)
	{
		if((need[i][j]<=work[j])&&fini[i]==0)
		{
			flag=1;
			
		}
		else
		{
			flag=0;
			break;
		}
		
		
		
	}
	if(flag==1)
	{
		for(k=0;k<m;k++)
		{
			work[k]=work[k]+allo[i][k];
			fini[i]=1;
			//printf("%d\t",work[k]);
			
			
		}
	c=c+1;
	printf("\np%d",i);
	}
	
	}
}


return 0;













}

