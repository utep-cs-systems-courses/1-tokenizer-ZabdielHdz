#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int space_char(char c){
  if(c == '\t' || c == '\n' || c == ' '){
    return 1;
  }
  return 0;
}

int non_space_char(char c){
  if((space_char(c)) || c == '\0'){
    return 0;
  }
  return 1;
}

char *word_start(char *str){
  while(space_char(*str)){
    *str++;
  }
  return str;
}

char *word_terminator(char *word){
  while(non_space_char(*word)){
    *word++;
  }
  return word;
}

int count_words(char *str){
  char *wordStart = word_start(str);
  int count = 0;
  while(non_space_char(*wordStart)){
    count++;
    *wordStart++;
  }
  return count;
}

char *copy_str(char *inStr, short len){
  char *new = malloc((len+1)*sizeof(char));
  for(int i = 0; i < len; i++){
    new[i] = inStr[i];
  }
  return new;
}
