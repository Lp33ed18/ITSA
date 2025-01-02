#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    int a = n / (60 * 60 * 24);
    n %= (60 * 60 * 24);
    int b = n / (60 * 60);
    n %= (60 * 60);
    int c = n / (60);
    n %= (60);
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", a, b, c, n);
	return 0;
}