#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a, b;
    scanf("%d %d", &a, &b);
    double ans = 0.0;
    if(a > 120){
        ans += ((double)a - 120.0) * 1.66 * (double)b;
        a = 120;
    }
    if(a > 60){
        ans += ((double)a - 60.0) * 1.33 * (double)b;
        a = 60;
    }
    if(a > 0){
        ans += ((double)a - 0.0) * 1.0 * (double)b;
        a = 0;
    }
    printf("%.1lf\n", ans);


	return 0;
}   