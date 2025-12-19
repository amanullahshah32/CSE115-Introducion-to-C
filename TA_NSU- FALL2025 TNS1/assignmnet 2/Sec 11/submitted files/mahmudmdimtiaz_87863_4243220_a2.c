// Property of Imtiaz 2512169

#include <stdio.h>

void arrange(int *p)
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(*(p+j) > *(p+j+1))
			{
				int temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}
	}
}


int main()
{
	int arr[5];
	printf("Enter 5 elements of the array: ");
	
	for(int i=0; i<5; i++)
		scanf("%d", &arr[i]);
	
	arrange(arr);
	
	printf("Array after arranging: ");
	for(int i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}

// Property of Imtiaz 2512169
