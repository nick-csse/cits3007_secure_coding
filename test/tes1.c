#include <stdio.h>
#include<stdlib.h> 
int main()
{
    char arr[] = "correct horse battery staple";
    //len = arr.length
    size_t arr_len = sizeof(arr) / sizeof(char);
    for (size_t i = 0; i < arr_len; i++)
    {
        printf("%c", arr[i]);
        
    }
    printf("\n");
    
}
