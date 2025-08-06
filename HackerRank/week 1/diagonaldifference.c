
    //executed with functions
#include <stdio.h>
#include <stdlib.h> 

int result;
int diagonal(int n, int arr[n][n]) 
{
    int firstdiagonal = 0;
    int seconddiagonal = 0;

    for (int i = 0; i < n; i++) 
    {
        firstdiagonal += arr[i][i];               
        seconddiagonal += arr[i][n - 1 - i];     
    }

    return abs(firstdiagonal - seconddiagonal);
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    
    for (int i = 0; i < n; i++)
    {           
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    result = diagonal(n, arr);
    printf("%d\n", result);

    return 0;
}

