#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char n;
    scanf("%c", &n);
    if(n == 'A' || n == 'E' || n == 'O' || n == 'I' || n == 'U' || n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') printf("母音\n");
    else printf("子音\n");



	return 0;
}