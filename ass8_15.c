#include <stdio.h>
#include <string.h>

int main( void )
{ 
   // declear array strings
   char sentence[100];
   
   // create char pointer
   char *tokenPtr; 

   // declear variable to save reverse sentence
   char *reverse[100];
   int counter = 0;
   
   puts("Please enter a sentence:");	
   fgets(sentence, 99, stdin);
   tokenPtr = strtok(sentence, " "); 
   reverse[counter] = tokenPtr;
                 
   //ctokenizing sentence until tokenPtr becomes NULL
   while (tokenPtr != NULL) 
   { 
      // get next token
      tokenPtr = strtok(NULL, " "); 
      counter++;
      // store values in reverse sentence
      reverse[counter] = tokenPtr;
   } 
   
   puts("Print the sentence with its words reversed:");
   while ( counter != 0 ) 
   {  
      printf("%s ", strtok(reverse[counter-1], "\n")); 
      counter--;
   } 
   
   puts("");
   
} 
