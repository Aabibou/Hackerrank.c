/*
    Abibou Mbodji August 2017
    This is the solution of this problem.
    https://www.hackerrank.com/challenges/a-very-big-sum/submissions/code/50729442
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int aVeryBigSum(int n, int ar_size, long int* ar) {
    long int bigSum=0;
    for(int i=0; i<ar_size; i++)
        bigSum += *(ar + i);
    return bigSum;
}

int main() {
    int n; 
    scanf("%i", &n);
    long int *ar = malloc(sizeof(long int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%li",&ar[ar_i]);
    }
    long int result = aVeryBigSum(n, n, ar);
    printf("%ld\n", result);
    return 0;
}
