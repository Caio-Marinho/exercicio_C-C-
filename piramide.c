#include <stdio.h>

int main(){
    int k;
    for (int i=1;i<=5;i++){
        for (int j=0;j<5-i;j++){
            printf(" ");
        }
        for (k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for (int c = 0;c<k/2-1;c++){
        printf(" ");
    }
    for (int d=0;d<2;d++){
        printf("*");
    }
    printf("\n");
    for (int c = 0;c<k/2-1;c++){
        printf(" ");
    }
    for (int d=0;d<2;d++){
        printf("*");
    }
    printf("\n");
    for (int c = 0;c<k/2-2;c++){
        printf(" ");
    }
    for (int d=0;d<4;d++){
        printf("*");
    }
    return 0;
}