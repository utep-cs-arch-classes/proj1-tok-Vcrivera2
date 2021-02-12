#include <stdio.h>

int main(){

  printf(">");
  
  char str[30];
  scanf("%[^\n]%*c", str);

  printf("%s\n", str);
  
  return 0;
}
