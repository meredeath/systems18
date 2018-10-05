#include <stdio.h>
#include <stdlib.h>

int main(){

  /*make a pointer to an array */
  int *array;
  
  printf("\nTesting calloc by making a five-int size array:\n");
  /*testing calloc, a function that dynamically allocates memory and sets it to 0*/
  array = (int*)calloc(5, sizeof(int));
  for(int i=0;i<5;i++){
    printf("%d",*(array+i));
  }
  
  printf("\n\n----------------\n\n");
  printf("Testing realloc by making the array larger and setting each value to 37:\n");
  int *new = (int *)realloc(array, sizeof(int)*10);
  for(int i=0;i<10;i++){
    *(new+i)= 37;
    printf("%d, ",*(new+i));
  }

  printf("\n\n");
  
  return 0;
}
