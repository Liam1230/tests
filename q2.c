#include <stdio.h>

int compareSum(int a[], int b[], int aLength, int bLength){

  int len = sizeof(a);
  int intlen = sizeof(int);

  int aSum = 0;
  for(int i = 0; i < aLength; i++){
    aSum += a[i];
  }

  int bSum = 0;
  for(int i = 0; i < bLength; i++){
    bSum += b[i];
  }

  if(aSum > bSum){
    return 1;
  }else if(aSum == bSum){
    return 0;
  }else{
    return -1;
  }
}

int main(){
  int a[] = { 8, 6, 9 };
  int b[] = { 10, 3, 4, 6};

  if(compareSum(a,b,sizeof(a) / sizeof(int), sizeof(b) / sizeof(int)) >= 0){
    printf("AはB以上\n");
  }else{
    printf("AはBより小さい¥n");
  }

  return 0;
}