#include <stdio.h>
int subtraction(int a, int b)
{
    return a - b;
}
int main()
{
    int (*fp)(int, int) = subtraction;
    // Calling function using function pointer
    int result = fp(5, 4);
    printf(" Using function pointer we get the result: %d\n", result);
    return 0;
}