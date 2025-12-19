#include <stdio.h>

int main() {
    int n, i, j, arr[100], count = 0, visited[100] = {0};

    printf("Enter number : ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        {
        if(visited[i])
            continue;

        int freq = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
             {
                freq++;
                visited[j] = 1;
            }
        }

        if(freq > 1)
            count++;
    }

    printf("Total number of duplicate element: %d\n", count);
    return 0;
}

