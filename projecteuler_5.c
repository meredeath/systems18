#include <stdio.h>
#include <stdbool.h>

int mult(){
  /*
  int num, divisor;
  num = 1;
  divisor = 1;
  while (divisor <= 20){
    bool isDiv = true;
    for(int i=1;i<=divisor;i++){
      if(num%i!=0){
	isDiv=false;
      }
    }
    if(isDiv==true){
      divisor+=1;
    }
    num+=1;
  }
  */
  return 2*3*4*5*6*7*11*13*17*19;
}

int main(){
  int ans = mult();
  printf("%d\n",ans);
  return 0;
}
