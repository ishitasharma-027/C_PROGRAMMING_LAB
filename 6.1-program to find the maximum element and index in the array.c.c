#include <stdio.h>
void main()
{
    int arr[] = {25, 11, 7, 75, 56};
    int length = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], i, in, found = 0;
    for (i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("largest element present in given array : %d\n", max);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == max)
        {
            printf("%d number found at the index value: %d", max, i);
            found = 1;
            break;
        }
    }
}
