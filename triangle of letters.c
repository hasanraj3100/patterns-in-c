#include<stdio.h>

int main() {

    int n, i, j, ch=0;
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        for(j=0;j<=i;j++) {
            printf("%c",ch+65 );
            ch++;
        }
        printf("\n");
    }
    return 0;
}
