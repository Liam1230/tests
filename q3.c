#include <stdio.h>
#include <string.h>

char* caesarCipher(char* s,int c){

  int i = 0;
  int z = ('Z' - 'A') + 1;

  while(s[i] != '\0'){
    s[i]= ((s[i] - 'A') + c + z) % z + 'A';
    i++;
  }

  return s;
}

int main(){

  char str[] = "TRACK";
  printf("%s\n", caesarCipher(str, 2));

  return 0;
}