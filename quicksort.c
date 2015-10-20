#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int lp,rp;

int partition(int ar[], int low, int lp, int rp, int high)
    {
    int i,j,x,temp,part_ind;
    i = low+1;
    j = low+1;
    x = ar[low];
    while(j<=high)
        {
        if(ar[j] < x)
            {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            i++;
        }
        j++;
    }
    ar[low] = ar[i-1];
    ar[i-1] = x;
    lp = i-2;
    rp = i;
    part_ind = i-1;
    return part_ind;
}

void quickSort(int ar[],int low, int high) {
    int pivot;
    if(low < high)
        {
        pivot = partition(ar,low,lp,rp,high);
        quickSort(ar,low,pivot-1);
        quickSort(ar,pivot+1,high);
        
    }
}
int main(void) {
   int ar_size;
   scanf("%d", &ar_size);
   int ar[ar_size], i;
   for(i = 0; i < ar_size; i++) { 
      scanf("%d", &ar[i]); 
   }

   quickSort(ar,0,ar_size-1);
   for(i=0;i<ar_size;i++)
       printf("%d,",ar[i]);
   return 0;
}
