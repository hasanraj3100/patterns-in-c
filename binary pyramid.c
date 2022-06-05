#include<stdio.h>

int main() {
    int n, i, j, sp;
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        for(sp=0;sp<n-i;sp++) printf(" ");
        for(j=0;j<=i;j++) {
            if(j%2==0) printf("1");
            else printf("0");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
