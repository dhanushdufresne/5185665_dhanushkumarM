#include <stdio.h>
int result;
int Uniquenumber(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int length;
    scanf("%d", &length);

    int arr[length];
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    result = Uniquenumber(arr, length);
    printf("%d\n", result);

    return 0;
}
