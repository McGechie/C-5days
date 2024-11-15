//
// Created by mcgec on 15/11/2024.
//
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define N 1000000

float first[N], second[N], result[N];
int i, j, interactions = 1000;
clock_t start, end, elapsed;
void main () {

    srand(time(NULL));

    for (i=0; i<N; i++) /* initialize */
    { first[i] = rand();
        second[i] = rand();
    }
    start = clock (); /* start timer */
    for (i=0; i<interactions ; i++)
        for (j=0; j < N; j++)
            result[j] = first[j] * second[j];
    end = clock ();
    printf ("Timing Ended.\n\n");
    elapsed = end - start;
    printf ("Time : %fs\n",(float)(elapsed)/CLOCKS_PER_SEC);
}