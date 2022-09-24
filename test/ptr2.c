


#include <stdio.h>
#include <stdio.h>

int main(void){

long a = 17;
long b = 45;
long *pta = &a;
long *ptb = &b;
long p = pta - ptb;
printf("%p\n %p\n %ld\n", (void *)pta, (void *)ptb, p);

printf("%ld\n %ld\n" , *pta, *ptb);
return 0;
}
