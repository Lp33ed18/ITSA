#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    int ans = 0;
    scanf("%d", &n);
    for(int i = 6; i <= n; i++){
        if(i % 2 == 0 && i % 3 == 0 && i % 12 != 0) ans += i; 
    }
    printf("%d\n", ans);


	return 0;
}