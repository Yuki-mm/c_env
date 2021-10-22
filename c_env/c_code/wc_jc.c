#include <stdio.h>
#include <string.h>
int wtoj(int, char *, int *);

int main(){
    int wyear = -1, jyear = 0;
    char nengo[16];

    printf("change w to j. YOU need to end to enter END.\n");
    while(wyear != 0){
        printf("type year(1868-2959) : ");
        scanf("%d", &wyear);
        if(wtoj(wyear, nengo, &jyear) == 0){
            printf("wyear %d is %s%d \n", wyear, nengo, jyear);
        }    
    }
    return 0;
}

int wtoj(int wyear, char *nengo, int *jyear){
    if(wyear >= 1868 && wyear <= 1911){
        strcpy(nengo, "meiji");
        *jyear = wyear - 1868 + 1;
        return 0;
    }else if(wyear >= 1912 && wyear <= 1925){
        strcpy(nengo, "taisho");
        *jyear = wyear - 1912 + 1;
        return 0;     
    }else if(wyear >= 1926 && wyear <= 1988){
        strcpy(nengo, "showa");
        *jyear = wyear - 1926 + 1;
        return 0;     
    }else if(wyear >= 1989 && wyear <= 2050){
        strcpy(nengo, "heisei");
        *jyear = wyear - 1989 + 1;
        return 0;
    }
    return 1;
}
