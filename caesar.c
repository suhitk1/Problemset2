#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{	
    // Stop if invalid num of arguments recieved
    if (argc != 2)
      {
        printf("Usage: \n");
        return 1;
      }
 
    // Get the caesar k value
    int k = atoi(argv[1]);
 
    // Get the text to cipher
    printf("plaintext:");
    string s = GetString();
    printf("ciphertext:");
    // Iterate through the text to cipher
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        char c = s[i];
 
        // Changes char depending on if it is uppercase, lowercase or else not a letter
        if (isupper(c))
          {
            char newC = (((c - 65) + k) % 26) + 65;
            printf("%c", newC);
          }
        else if(islower(c))
          {
            char newC = (((c - 97) + k) % 26) + 97;
            printf("%c", newC);
          }
        else
          {
            printf("%c", c);
          }
    }
    printf("\n");
    return 0;
 
 
}