#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int IsUpper(char c){
	if (c>='A'&&c<='Z') return 1;
	else return 0;
}
int ToLower(char c){
	return c=c+32;
}
int CheckAlpha(char c){
	if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')) return 1;
	else return 0;
}
int main(int argc, char *argv[]) {
	char str[100];
    int freq[256]; // Store frequency of each character
    int i = 0, max;
    int ascii;
    int key;
    do{
    	
	

    printf("Enter any string: ");
    gets(str);
    strlwr(str);

    /* Initializes frequency of all characters to 0 */
    for(i=0; i<256; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    for(i=0;i<strlen(str);i++){
    	if(CheckAlpha(str[i])==1){
    		if(IsUpper(str[i])==1) str[i]=ToLower(str[i]);
    		ascii=(int)str[i];
    		freq[ascii]=freq[ascii]+1;
		}
	}
	for(i=0;i<=255;i++){
		if(freq[i]!=0) printf("ki tu '%c': %d times\n",i,freq[i]);
	}
	key=getchar();
}while(key!=27);
return 0;
}
