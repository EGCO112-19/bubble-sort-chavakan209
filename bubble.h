//
//  bubble.h
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#ifndef bubble_h
#define bubble_h
#include "swap.h"
void display(int value[], int N){
    int i;
    for(i=0;i<N;i++){
        printf("%5d",value[i]);
    }
    printf("\n");
}


void bubble(int a[], int N){
    int i;
    int j;
    int sorted;
    display(a,N);
    for (i = N-1; i>0; i--){
        for (j = 0; j < i; j++){
          sorted = 0;
          if(a[j]>a[j+1]){
            swap(&a[j],&a[j+1]);
            sorted = 1;
          }
          if(sorted) display(a,N);
       }
    }
}

#endif /* bubble_h */