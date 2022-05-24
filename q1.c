#include <stdio.h>
#include <math.h>

double hypotenuse(int x, int y){
  int x2 = x * x;
  int y2 = y * y;
  int z2 = x2 + y2;
  double z;

  z = sqrt(z2);

  return z;
}

int main(){
  int x;
  int y;

  scanf("%d %d", &x, &y);
  printf("%f", hypotenuse(x,y));

  return 0;
}