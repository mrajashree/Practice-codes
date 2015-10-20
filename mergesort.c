#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
void merge(int A[], int low, int mid, int high)
    {
    int i,j,k,len,l;
    int *B;
    len = (high-low+1);
    B = malloc(sizeof(int)*len);
    i = low;
    j = mid+1;
    k = 0;
    while(i<=mid && j<=high)
        {
        if(A[i] <= A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    
    while(i<=mid)
        {
            B[k++] = A[i++];
    }
    
    while(j<=high)
        {
            B[k++] = A[j++];
    }
    
    l = 0;
    i = low;
    while(l<k)
        A[i++] = B[l++];
}

void mergesort(int A[], int low, int high)
    {
    int mid;
    if(low < high)
        {
        mid = (low+high)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,m;
    int *A;
    scanf("%d",&n);
    A = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    mergesort(A,0,n-1);
    printf("[");
    for(i=0;i<n-1;i++)
        printf("%d,",A[i]);
    printf("%d]",A[i]);
    return 0;
}
