#include <stdio.h>

main(){
    FILE *fp;
    char s[20];
    int i = 1;
    fp = fopen("./file/abc.txt", "r");
    if(fp == NULL)
        return;
    while(1){
        fgets(s, 20, fp);
        if(feof(fp))
            break;
        printf("%04d:%s", i, s);
        i++;
    }
    fclose(fp);
}