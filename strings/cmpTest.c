#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char * str1 = malloc(16*sizeof(char));
  char * str2 = "Hello";
  strcpy(str1, str2);
  str1[0] = 'h';
  // TODO: determine and print if str1 and str2 are the same 
}
