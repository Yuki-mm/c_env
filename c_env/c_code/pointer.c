#include <stdio.h>

main(){
    char x = 4, y;
    char *p = &x;
    y = *p;
    printf("var x is %d \n", y);
}