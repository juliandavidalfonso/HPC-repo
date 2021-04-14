#include <stdio.h>
#include <omp.h>



void simple(int n, float *a, float *b)
{
 int i;
#pragma omp parallel for
 for (i=1; i<n; i++) /* i is private by default */
 b[i] = (a[i] + a[i-1]) / 2.0;
}

 
int main(){
    float a[20], b[20];

    simple(20, a, b);
    return 0;
}



