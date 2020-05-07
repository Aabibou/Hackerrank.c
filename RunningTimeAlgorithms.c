/*
    Abibou Mbodji August 2017
    This is the solution of this problem.
    https://www.hackerrank.com/challenges/runningtime/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


int insertionSort(int N, int arr[]) {
    int i,j, counter=0;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
            counter++;
        }
        arr[j+1]=value;
    }
return counter;
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", insertionSort(N, arr));

    return 0;
}
