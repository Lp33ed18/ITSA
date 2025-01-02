#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    int x = 0;
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        x = (a > x) ? a : x;
    }
    printf("%d\n", x);



	return 0;
}