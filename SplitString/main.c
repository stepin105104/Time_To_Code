#include<stdio.h>
#include <string.h>

int main() {
   char string[50] = "Time_To_Code";
   // Extract the first token
   char * token = strtok(string, "_");
   // loop through the string to extract all other tokens
   while( token != NULL ) {
      printf( " %s\n", token ); //printing each token
      token = strtok(NULL, "_");
   }
   return 0;
}
