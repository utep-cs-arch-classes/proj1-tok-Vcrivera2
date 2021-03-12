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



//will check for a space andreturn 1 for true if found
int space_char(char c){

  if(c == ' ' || c == '\t' || c == '\n' && c != '\0'){
    return 1;
    
  }

  return 0;
  
}



//will check for non space return 1 if found
int non_space_char(char c){
  if( c != ' ' && c != '\t' && c != '\n' && c != '\0'){
    return 1;
  }

  return 0;
}


char *word_start(char *str){ //to first non space character

  //save address and get a check using non_space_char
  char *x = str;
  int check = non_space_char(*x);

  //will continue if we keep reading a space or not at the end
  while(check == 0 && *x != '\0'){
    check = non_space_char(*x);

    //if we find a space break
    if (check == 1){
      break;
    }

    //if not increment the char string
    x++;
  }

  //at the end we check to see if empty if not return the pointer to the start
  //of the next word
  if(*x == '\0'){
    return 0;
  }
  else{
    return x;
  }
}



char *word_end(char *str){ //to for space character after end of word

  //saving the pointer of the string and sending
  char *x = str;
  int check = space_char(*x);

  //continue if we still have a non space word
  //or we are not at the end of the string
  while(check == 1 && *x!= '\0'){

    //save our chec
    check = space_char(*x);

    //if we read a space break the loop
    if(check == 0){
      break;
    }
    //if not continue down the string
    x++;
    
  }

  //check to see if we have a empty string
  //if not return the end pointer of the string
  if(*x=='\0'){
    return 0;
  }
  else{

    return x;
  }

}



int count_words(char *str){


  char *x = str;
  int count =0;

  while(*x != '\0'){

    if(space_char(*x) == 0){
      x = word_end(x);
      count++;
    }
    if(space_char(*x) == 1){
      x= word_start(x);
    }
    else{
      x++;
    }

    return count;
    
  }

}

