#include <stdio.h>

int bsearch (int* arr, int size, int key) 
{
	
	int low, high, mid;
	
	if (NULL == arr) 
	{
		return -1;
	}

	if (0 == size) 
	{
		return -1;
	}

	if (key > arr[size-1]) 
	{
		return -1;
	}


	low = 0;
	high = size - 1;

	if (arr[low] == key) 
	{
		return low;
	}	

	if (arr[high] == key) 
	{
		return high;
	}

	while (low < high) 
	{
		mid = (low + high) / 2;		
		
		if (arr[mid] == key) 
		{
			return mid;
		}

		low = (arr[mid] < key) ? mid: low;
		high = (arr[mid] > key) ? mid: high;
	}

	return -1;
}


int main (int argc, char* argv[]) 
{
	
	int a[10], i;	

	for (i = 0; i < 10; i++) 
	{
		a[i] = i;
	}


	printf("location: %d\n", bsearch(a, 10, 0));

	return 0;
}
