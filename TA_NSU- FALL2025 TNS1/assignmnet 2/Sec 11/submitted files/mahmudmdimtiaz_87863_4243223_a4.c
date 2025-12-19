// Property of Imtiaz 2512169

#include <stdio.h>

void rev_arr(int arr[], int rev_arr[], int size)
{
	int j=0;
	
	for(int i=size-1; i>=0; i--)
	{
		rev_arr[j] = arr[i];
		j++;
	}
}

void rev_arr_ptr(int *arr, int *rev_arr, int size)
{
	int j=0;
	
	for(int i=size-1; i>=0; i--)
	{
		*(rev_arr+j) = *(arr+i);
		j++;
	}
}
	

int main()
{
	int original[5];
	int reversed[5];
	printf("Enter the elements of the array: ");
	
	for(int i=0; i<5; i++)
		scanf("%d", &original[i]);
		
	rev_arr_ptr(original, reversed, 5);
	
	printf("Reversed Array: ");
	
	for(int i=0; i<5; i++)
		printf("%d ", reversed[i]);
	
	return 0;
}

// Property of Imtiaz 2512169
