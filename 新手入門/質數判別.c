#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    int flag = 1;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) flag = 0;
    }
    if(flag) printf("YES\n");
    else printf("NO\n");



	return 0;
}