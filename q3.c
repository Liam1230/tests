#include <stdio.h>
#include <string.h>

char* caesarCipher(char* s,int n){

  int i = 0;
  int z = ('Z' - 'A') + 1;

  while(s[i] != '\0'){
    s[i]= ((s[i] - 'A') + n + z) % z + 'A';
    i++;
  }

  return s;
}

int main(){

  char s[100];
  int n;

  scanf("%s %d", s, &n);

  printf("%s\n", caesarCipher(s, n));

  return 0;
}