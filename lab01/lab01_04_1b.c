/**  CITS3007 lab01 4.1.b
Consider the following C code:

const char * str = "test";
char c = str[0];

if (c >= 65 && c <= 90) {
  printf("high\n");
} else if (c >= 97 && c <=122) {
  printf("low\n");
} else {
  printf("other\n");
}
If this code is executed, what will be printed to the terminal?

What is the output of the question (b) code if we change the string "test" to "TEST"?

What is the output of the question (b) code if we change the string "test" to "???"?
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    const char * str = "????";
    char c = str[0];

    if (c >= 65 && c <= 90) {
        printf("%c %d high\n", c, c);
    } 
    else if (c >= 97 && c <=122) {
        printf("%c %d low\n", c, c);
    }   
    else {
        printf("other\n");
    }
}
