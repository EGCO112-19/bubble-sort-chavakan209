#include<stdio.h>
#include<stdlib.h>
#include "bubble.h"

void main(int argc, char **argv){
  int *a,N;
  N = argc-1;
  a = (int*)malloc(sizeof(int)*N);
  for(int i = 0; i < N; i++){
    a[i] = atoi(argv[i]);
  }
  printf("\nSorting Process\n");
  bubble(a,N);
  return 0;
}
