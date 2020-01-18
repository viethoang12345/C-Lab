/**
 * C program to find maximum occurring character in a string
 */

#include <stdio.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 256 // Maximum characters allowed


int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; // Store frequency of each character
    int i = 0, max;
    int ascii;
    int key;
    do{
    	
	

    printf("Enter any string: ");
    gets(str);

    /* Initializes frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    // count times appear of every character in string
	for( i=65;i<122;i++)
	{
		if(freq[i]!=0)
		printf("ki tu '%c' : %d times\n",i,freq[i]);
		if(freq[i]==1)
		printf("Found character:%c\n",i);
	}
	key=getch();
	}while(key!=27);
	    return 0;
}
