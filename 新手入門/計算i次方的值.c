#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    while(n--){
        int a;
        scanf("%d", &a);
        if(a > 31) printf("Value of more than 31\n");
        else    printf("%d\n", (1 << a));
    }



	return 0;
}