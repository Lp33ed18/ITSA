#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    int flag = 0;
    if(n < 0) {
        n += 1;
        n = -n;
        flag = 1;
    }
    int ans[8];
    for(int i = 0; i < 8 ; i++){
        ans[i] = 0;
    }
    int time = 0;
    while(n){
        ans[time] = n % 2;
        n /= 2;
        time++;
    }
    if(flag){
        for(int i = 0; i < 8; i++){
            ans[i] = (ans[i] == 1) ? 0 : 1;
        }
    }
    for(int i = 7; i >= 0; i--){
        printf("%d", ans[i]);
    }
    printf("\n");



	return 0;
}