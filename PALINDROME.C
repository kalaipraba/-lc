#include <stdio.h>
#include <string.h>
 

void isPalindrome(char str[])
{
   
    int h = strlen(str) - 1;
 
    
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}
 

{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    getch();
}
