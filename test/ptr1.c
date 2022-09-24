#include <stdio.h>
int* myfunc()
{
    int a_local_var = 36;
    int *a_pointer = &a_local_var;
    return a_pointer;
}

int main(void){

    int *ptr = myfunc();
    printf("%p\n", (void *)ptr);
    return 0;
}
