#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int arr[] = {2,3,4,5,6,4};
	int k,i,j,l,flag=0;
	long int arr_size;
	printf("Enter  k : ");
	scanf("%d",&k);

	i = 1;
	j = 2;

	arr_size = sizeof(arr)/sizeof(int);
	printf("number of elements in arr before: %ld\n",arr_size);

while(arr_size > 0)
{
	j = 2;
	//i = 1;
	while(j < 6)
	{
		printf("compared elements! arr[i-1] : %d, arr[i] : %d, arr[j] : %d\n", arr[i-1],arr[i],arr[j]);
		if((arr[i] - arr[i-1] == k) && (arr[j] - arr[i] ==k))
		{
			arr[i-1] = arr[i+2];
			arr[i] = arr[i+3];
			arr[j] = arr[i+4];
			printf("new elements! arr[i-1] : %d, arr[i] : %d, arr[j] : %d\n", arr[i-1],arr[i],arr[j]);
			i+=3;
			j+=3;
			arr_size-=3;
			printf("Array size : %ld\n", arr_size);
			printf("Array : ");
			for(l=0;l<arr_size;l++)
				printf("%d ",arr[l]);
			printf("\n");
			if(arr_size==0)
				break;
		}
		else
		{
			if(arr_size==3)
			{
				flag = 1;
				break;
			}
			i++;
			j++;
		}
	}
	if(flag)
		break;
}
	printf("number of elements in arr after: %ld\n",arr_size);
}