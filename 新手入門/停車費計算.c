#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    a = c - a;
    b = d - b;
    a *= 2;
    if(b < 0) a -= 1;
    int ans = 0;
    while(a){
        if(a > 8){
            ans += 60;
            a--;
        }
        else if(a > 4){
            ans += 40;
            a--;
        }
        else{
            ans += 30;
            a--;
        }
    }
    printf("%d\n", ans);


	return 0;
}