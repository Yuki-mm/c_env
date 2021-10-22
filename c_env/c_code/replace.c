#include <stdio.h>
#include <string.h>

int main(){
    FILE *fpr, *fpw;
    char bufr[256], bufw[256];
    char str1[] = "dog";
    char str2[] = "rabbit";
    char *p, *q;

    if(!(fpr = fopen("./file/dog.txt", "r"))){
        printf("fatal open file");
        return 1;
    }

    if(!(fpw = fopen("./file/rabbit.txt", "w"))){
    printf("fatal open file");
    return 1;
    }
    while(1){
        fgets(bufr, 256, fpr);
        strcpy(bufw, bufr);
        p = strstr(bufr, str1);
        if(p){
            q = bufw + (p - bufr);
            strcpy(q, str2);
            strcpy(q+strlen(str2), p+strlen(str1));
        }
        fprintf(fpw, "%s", bufw);
        if(feof(fpr))
            break;
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}