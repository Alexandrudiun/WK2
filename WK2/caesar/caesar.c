#include <csbootcamp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

string encription_process(string, int);
void printing_process(string);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key");
        return 1;
    }

   
    for(int i =0; i<strlen(argv[1]);i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        
    }

int key = atoi(argv[1]);


    if(key<0) 
     {
         printf("Usage: ./caesar key\n");
         return 1;  
     }

string word = get_string("plaintext: ");

int move=key%26;

word = encription_process(word,move);

printing_process(word);


return 0;

}




string encription_process(string word, int move)
{
    for(int i=0;i<strlen(word);i++)
    {

        if(word[i]>='A'&& word[i]<='Z')
        {
           int position = word[i]-'A';
           word[i]=((position+move)%26)+'A';
        }

        else if (word[i]>='a'&& word[i]<='z')
              {
                  int position = word[i]-'a';
                  word[i]=((position+move)%26)+'a';
              }
    
    }
return word;

}


void printing_process(string word)
{
printf("ciphertext: %s\n",word);
printf("\n");
}









