#include<stdio.h>
#include<stdlib.h>
int main (){
    int x;
    do {
        printf("Introduce el numero de altitud del triangulo:");
        scanf("%d",&x);
    }
        while (x<=0);
        for (int i=0;i<=x;i++){
            for (int j=0;j<=x-i;j++)
            printf(" ");
            for (int j=0;j<=2*i-1;j++)
            printf("* ");
            printf("\n");
}
}

