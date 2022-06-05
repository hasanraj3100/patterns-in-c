#include <stdio.h>

int main() {

	int n, i, j, sp;
	scanf("%d", &n);

	for(i=n;i>0;i--) {
        for(sp=0;sp<n-i;sp++) printf(" ");
        for(j=0;j<i;j++) printf("* ");
        printf("\n");
	}

}

