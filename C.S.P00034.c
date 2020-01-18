#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{   int i;
    char x[200];
    printf("\nEnter an string: ");
    fflush(stdin);
    gets(x);
    int n=strlen(x);
    for(i=0;i<n;i++)
    {
        if(x[i]>=97&&x[i]<=122)
        x[i]=x[i]-32;
        else if(x[i]>=65&&x[i]<=90)
        x[i]=x[i]+32;       
    }
    for(i=0;i<strlen(x)/2;i++)
    {
      char temp=x[i];
      x[i]=x[strlen(x)-1-i];
      x[strlen(x)-1-i]=temp;
    }
    printf("\nAn string after change: %s",x);
    getch();
    return 0;
}
