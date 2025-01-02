    #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        printf("%lld\n", (a + b) * (b - a + 1) / 2);
    }



	return 0;
}