#include <stdlib.h>
#include <stdio.h>

typedef struct vector{
    int max;
    int size;
    int *arr;

}vector_t;

void append(vector_t *vec, int num){
    if (vec -> size < vec -> max){
	vec->arr[vec->size] = num;
	vec->size++;
    }
    else{
	vec->arr = realloc(vec->arr, sizeof(int)*2*vec->max);
	vec->arr[vec->size] = num;
	vec->size++;
    }
    return;
}


int main(){

    vector_t myVec;
    myVec.size = 0;
    myVec.max = 2;
    myVec.arr = malloc(sizeof(int)*2);

    append(&myVec,1);
    append(&myVec,2);
    append(&myVec,3);

    int i;
    for(i = 0; i<myVec.size; i++){
	printf("%d   ",myVec.arr[i]);


    
    }
    free(myVec.arr);
    return 0;
}




