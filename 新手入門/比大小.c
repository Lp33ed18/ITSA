#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b) a = b;
    if(a < c) a = c;
    printf("%d\n", a);
	return 0;
}