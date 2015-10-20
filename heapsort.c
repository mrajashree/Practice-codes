#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void heapify(int A[], int i, int n)
    {
    int lt,rt,min = 0,temp;
    lt = 2*i;
    rt = 2*i+1;
    
    if(lt<=n && A[lt] < A[i])
        min = lt;
    else
        min = i;
    
    if(rt<=n && A[rt] < A[min])
        min = rt;
    
    if(min!=i)
        {
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
        heapify(A,min,n);
    }
    
}

void buildheap(int A[],int n)
{   
    int i;
    for(i = n/2; i>=1; i--)
        {
        heapify(A,i,n);
    }
}

void heapsort(int A[], int n)
    {
    int temp,i,heap_size =n;
    buildheap(A,n);
    for(i = n; i >1; i--)
        {
        temp = A[1];
        A[1] = A[i];
        A[i] = temp;
        heap_size--;
        heapify(A,1,heap_size);
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,m;
    int *A;
    scanf("%d",&n);
    A = malloc(sizeof(int)*n);
    for(i=1;i<=n;i++)
        scanf("%d",&A[i]);
    heapsort(A,n);
    printf("[");
    for(i=n;i>1;i--)
        printf("%d,",A[i]);
    printf("%d]",A[i]);
}