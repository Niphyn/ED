#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

Vector *vector_construct(){
    Vector *v = (Vector *)calloc(1,sizeof(Vector));
    v->size = 0;
    v->allocated = 20;
    v->data = (data_type *)calloc(v->allocated,sizeof(data_type));
    return v;
}

void vector_destroy(Vector *v){
    free(v->data);
    free(v);
}

void vector_push_back(Vector *v, data_type val){
    if(v->size == v->allocated){
        v->allocated *= 2;
        v->data = (data_type*)realloc(v->data, v->allocated*sizeof(data_type));
    }

    v->data[v->size] = val;
    v->size++;
}

data_type vector_get(Vector *v, int i){
    return v->data[i];
}
void vector_set(Vector *v, int i, data_type val){
    v->data[i] = val;
}

int vector_size(Vector *v){
    return v->size;
}

int vector_find(Vector *v, data_type val){
    int indice = -1;
    for(int i = 0; i < v->size; i++){
        if(v->data[i] == val){
            indice = i;
        }
    }
    return indice;
}