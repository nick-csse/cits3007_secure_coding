/**This program adds two numbers using pointers
to demonstrate the concept of pointers
*/
#include <stdio.h>
int akbar(void){
    // Local Declarations
    int a ;
    int b;
    int r;
    int* pa = &a;
    int* pb = &b;
    int* pr = &r;
    // Statements
    printf( "Enter the first number : " );
    scanf ( "%d" , pa);
    printf( "Enter the second number: " );
    scanf ( "%d" , pb);
    *pr = *pa + *pb ;
    printf("%d + %d is %d\n" , *pa , *pb , *pr);
    return 0;
} // main
