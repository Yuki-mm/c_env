#include <stdio.h>

main(){
    char s[] = "I love cat and dog.";
    char c = 'a';
    char *p = s;
    int n = 0;

    printf("from\"%s\"serch for\'%c'\n", s, c);
    while(*p != '\0'){
        if(*p == c){
            printf("find in %d th \n", p-s+1);
            n++;
        }
        p++;
    }
    if(n==0)
        printf("nothing\n");
    else
        printf("total %d find \n", n);
}