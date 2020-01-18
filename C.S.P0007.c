#include<stdio.h>
#include<conio.h>
#include<string.h>
void xoa(char s[90],int vitrixoa);
void xoakt(char*s);
int main()
{
    char s[90];
    int i,key;
    do{
	
    printf("nhap chuoi ");
    gets(s);
	xoakt(s);
    puts(s);
    getch();
}
while (key!=27);
}
void xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);
	int i;
    for( i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0'; 
}
void xoakt(char*s)
{
	int i;
    for( i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}
