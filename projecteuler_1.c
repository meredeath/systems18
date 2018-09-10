#include <stdio.h>

/* #1 on project euler */

int mults(){
  int s, threes, fives;
  s = 0;
  threes = 0;
  while (threes < 999){
    threes += 3;
    s += threes;
  }
  fives = 0;
  while (fives<995){
    fives+=5;
    if(fives%3==0){
      fives+=5;
    }
    s+=fives;
  }
  return s;
}

int main()
{
  int ans = mults();
  printf("%d\n", ans);
  return mults();
}
