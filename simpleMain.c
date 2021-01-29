#include<stdio.h>
#include<stdlib.h>
#include "bubble.h"

void main(int argc, char **argv){
  int *a,N;
  N = argc-1;
  a = (int*)malloc(sizeof(int)*N);
  for(int i = 1; i < argc; i++){
    a[i-1] = atoi(argv[i]);
    printf("%d",a[i-1]);
  }
  printf("\nSorting Process\n");
  bubble(a,N);
}
