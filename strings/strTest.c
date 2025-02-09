#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  char * str1 = malloc(sizeof(char)*20);
  strcpy(str1, "hello");
  char * str2 = ", World!";

  str1[0] = 'H';
  strcat(str1, str2);

  printf("%s\n", str1);

  // concatenate str1 and str2 to "Hello, World!" 

  return 0;
}
