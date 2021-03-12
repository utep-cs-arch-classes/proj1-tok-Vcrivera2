#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

#define LIMIT 100


int main(){

  char input[LIMIT];
  char c;
  int i;

    printf(">");
  
    for(i = 0; (c = getchar()) != '\n' && i < LIMIT - 1; i++){
      input[i] = c;
    }

    printf("%s\n", input);
    input[i] = '\0';
    
  
}



int space_char(char c){

  if(c == ' ' || c == '\t' || c == '\n' && c != '\0'){
    return 1;
    
  }

  return 0;
  
}




int non_space_char(char c){
  if( c != ' ' && c != '\t' && c != '\n' && c != '\0'){
    return 1;
  }

  return 0;
}


char *word_start(char *str){ //to first non space character


}



char *word_end(char *str){ //to for space character after end of word


}



int count_words(char *str){



}

