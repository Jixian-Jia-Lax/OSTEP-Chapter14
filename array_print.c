#include <stdlib.h>
#include <stdio.h>
int main(){
    
    int *arr = malloc(100*sizeof(int));

    free(&arr[5]);
    //printf("the value of the first element is %d \n",arr[0]);

    return 0;



}
