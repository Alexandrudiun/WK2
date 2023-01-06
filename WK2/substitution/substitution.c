#include <csbootcamp.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{


   if (argc != 2 )
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if(strlen(argv[1])!=26)
    {
       printf("Key must contain 26 characters.\n");
        return 1; 
    }
   
    for(int i =0; i<strlen(argv[1]);i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
        
    }



char CAPS[26];
char caps[26];

for(int i=0;i<26;i++)
    {
    CAPS[i]='A'+i;
    caps[i]='a'+i;
    }

string plaintext=get_string("plaintext: ");

int j=0,i=0;

for(i=0;i<strlen(plaintext);i++)
    { int ok=0;
    if(isalpha(plaintext[i]))
    {
        for(j=0;j<26;j++)
        {
            if(plaintext[i]==CAPS[j])
            { 
                ok=j;
            }

            if(plaintext[i]==caps[j])
            {
                ok=j;
            }
        }

        if(plaintext[i]<='Z')
        {
            plaintext[i]=argv[1][ok];
        }   
        else 
        {
            plaintext[i]=tolower(argv[1][ok]);
        }
    }
        
    }
printf("ciphertext: %s",plaintext);
printf("\n");
return 0;
}