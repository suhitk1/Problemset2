#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (void)                                                          // start of program
{
  string s;                                                       // initialisation of variable s
  
  s = GetString();
  printf("%c",toupper(s[0]));                                   // statement to print initial character of the name 
  for(int i = 0, n = strlen(s); i < n; i++) {                  // loop to find the initial character of the sirname
      
       if(s[i] == ' ' && s[i+1] != '\0') {
        printf("%c", toupper(s[i + 1]));                     // statement to print the first character of the sirname
        i++;
       }
   }
   printf("\n");                                                  
   return 0;
}
