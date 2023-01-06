#include <csbootcamp.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) 
{


string text = get_string("Text: ");




float words=1;
float letters=0;
float sentence=0;
for(int i=0; i<strlen(text); i++)
    {
        if(isalpha(text[i]))letters++;
        if(text[i]==' ')words++;
        if(text[i]=='.'|| text[i]=='?'
        ||text[i]=='!'||text[i]==';') sentence++;
    } 


float L =(letters/words)*100;
float S =(sentence/words)*100; 
float index =  0.0588 * L - 0.296 * S - 15.8;

if(index>=16)printf("Grade 16+\n");
else
printf("Grade %.0f\n", index);  
}