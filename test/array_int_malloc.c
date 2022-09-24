#include <stdio.h>
#include <stdlib.h>
int *make_arr(int n)
{
    int *arr = malloc(n * sizeof(int));
    return arr;
}
int main()
{
    int n;
    printf("How big an array to allocate? ");
    scanf("%d", &n); // insecure, prefer scanf_s
    int *arr = make_arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = n;
    free(arr);
}