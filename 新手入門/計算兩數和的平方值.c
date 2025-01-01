#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    while(n--){
        int a;
        scanf("%d", &a);
        printf("%d %d %d\n", a, a * a, a * a * a);
    }



	return 0;
}