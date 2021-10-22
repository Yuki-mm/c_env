#include <stdio.h>

main(){
    printf("    %8s %8s\n", "itemA", "itemB");
    printf("num %08d %08d\n", 16, 246);
    printf("weight %8.4f %8.4f\n", 76.3, 556.1);
    printf("%d%c", 20, 10);
    printf("%d\bA\n", 20);
    printf("%d\t%d\n", 20, 30);
}