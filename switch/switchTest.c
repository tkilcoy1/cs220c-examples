#include <stdio.h>

int main(){
  int a = 8;
  int b = 4;
  int ans;

  printf("Enter the operation you wish to perform:\n");
  char op = getchar();
  switch(op){
    // write the switch statement
  case '+': ans = a + b;
    break;
  case '-': ans = a - b;
    break;
  case '*': ans = a * b;
    break;
  case '/': ans = a/b;
    break; 
  default: printf("not an operation\n");
    ans = 0;
  }
  printf("a %c b = %d\n", op, ans);
}
