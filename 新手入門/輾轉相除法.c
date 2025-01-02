#include <stdio.h>
#include <stdlib.h>

int func(int a, int b){
    if(b == 0) return a;
    return func(b, a % b);
}
int main(int argc, char *argv[]) {

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", func(a, b));


	return 0;
}