#include <stdio.h>
#include<string.h>
#include<conio.h>
void main(){
char str[] = "good men to come to the aid of their country";
char delims[] = " ";
char *result;
char word[100][100];
int loop=1;
result = strtok(str, delims );
strcpy(word[0],result);
while( result != NULL ) {
    loop++;

    strcpy(word[loop],result);
     result = strtok( NULL, delims );

   }
int mid=loop/2-1;

printf("word is %s \n",word[mid+1]);
getch();
