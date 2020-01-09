#include <stdio.h>
#include <stdlib.h>

int out(char a[],int b[],int n,int max)
{
	int i;
	printf("\n Times of appearence for each character:");
	printf("\n");
	for(i=0;i<n;i++)
	printf("%3c",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%3d",b[i]);
	printf("\n Chracters that appears the most:");
	printf("\n");
	for(i=0;i<n;i++)
	if (b[i]==max)
	printf("%3c",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	if(b[i]==max)
	printf("%3d",b[i]);
}
int main()
{
char a[50], str[50];
int b[50],i,j,max,key,check,n;
do{
	a[0]='\0';max=0;b[0]='\0';n=0;
	printf("\nInput string: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if (str[i]!=' ')
		{
			check=1;
			for(j=0;j<n;j++)
			{
				if(a[j]==str[i])
				{
					b[j]=b[j]+1;
					if (max<b[j]) max=b[j];
					check=0;
				}
			}
			if (check)
			{
			a[n]=str[i];
			a[n+1]='\0';
			b[n]=1;	
			b[n+1]='\0';
			n++;
			}
		}
	}
		out(a,b,n,max);
		fflush(stdin);
		key=getch();
}
while (key!=27);
}
