#include <stdio.h>

main(){
    FILE *fp;
    char filename[] = "bintest.dat";
    int buf_w[10], buf_r[10];
    int i;

    for (i = 0; i < 10; i++)
        buf_w[i] = (i + 1) * 10;
    if(!(fp = fopen(filename, "wb")))
        return;
    if(fwrite(buf_w, sizeof(int), 10, fp) != 10){
        fclose(fp);
        return;
    }
    fclose(fp);

    if(!(fp = fopen(filename, "rb")))
        return;
    if(fread(buf_r, sizeof(int), 10, fp) != 10){
        fclose(fp);
        return;
    }
    fclose(fp);

    for(i = 0; i < 10; i++){
        printf("%d ", buf_r[i]);
    }
}
