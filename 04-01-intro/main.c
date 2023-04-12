#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "vector.h"

int main()
{  
    srand(time(NULL));

    int x = rand();
    
    double start = get_timestamp(); 

    // trecho que queremos medir

    double end = get_timestamp(); 

    // tempo passado entre os dois pontos do código
    double dt = (end - start);

    return 0;
}