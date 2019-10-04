#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    FILE *in;
    in=fopen("in.txt","w");
    fprintf(in,"2 4\n1542\n2737\n63\n2737\n63\n51176\n1542\n59275\n63\n51176\n2410\n63");
    fclose(in);
}