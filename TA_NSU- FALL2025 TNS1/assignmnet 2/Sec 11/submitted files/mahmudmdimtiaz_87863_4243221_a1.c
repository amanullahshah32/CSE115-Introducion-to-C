// Property of Imtiaz 2512169

#include <stdio.h>

int max(int *p, int size)
{
	int largest = *p;
	
	for(int i=0; i<size; i++)
	{
		if(*p>largest)
			largest = *p;

		p++;
	}
	return largest;
}


int main()
{
	int arr[5];

	printf("Enter 5 elements of the array: ");

	for(int i=0; i<5; i++)
		scanf("%d", &arr[i]);
	
	int largest = max(arr,5);

	printf("The largest element in the array is: %d", largest);
	
	return 0;
}

// Property of Imtiaz 2512169
